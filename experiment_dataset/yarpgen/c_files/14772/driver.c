#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-95;
signed char var_3 = (signed char)119;
unsigned int var_9 = 3430858765U;
unsigned char var_11 = (unsigned char)196;
unsigned int var_12 = 3384787546U;
int zero = 0;
unsigned char var_13 = (unsigned char)233;
unsigned long long int var_14 = 15692679941752147362ULL;
unsigned char var_15 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
