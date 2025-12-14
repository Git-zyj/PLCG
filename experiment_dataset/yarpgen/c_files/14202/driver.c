#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3598273301U;
unsigned long long int var_5 = 4014611248957969988ULL;
short var_11 = (short)15050;
int zero = 0;
unsigned short var_12 = (unsigned short)61163;
unsigned char var_13 = (unsigned char)218;
signed char var_14 = (signed char)-41;
unsigned char var_15 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
