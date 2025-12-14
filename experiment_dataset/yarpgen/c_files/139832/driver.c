#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16466885099847804970ULL;
signed char var_2 = (signed char)-43;
unsigned int var_4 = 483857179U;
signed char var_6 = (signed char)57;
signed char var_7 = (signed char)98;
unsigned long long int var_11 = 17956303620488939331ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)47;
unsigned char var_13 = (unsigned char)158;
unsigned int var_14 = 2399124214U;
short var_15 = (short)7143;
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
