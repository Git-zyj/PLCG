#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-116;
unsigned char var_9 = (unsigned char)89;
signed char var_11 = (signed char)-60;
int zero = 0;
unsigned int var_19 = 3217118255U;
unsigned char var_20 = (unsigned char)236;
short var_21 = (short)13746;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
