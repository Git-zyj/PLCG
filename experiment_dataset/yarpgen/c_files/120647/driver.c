#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
unsigned int var_1 = 316242960U;
unsigned char var_2 = (unsigned char)226;
unsigned char var_3 = (unsigned char)94;
signed char var_5 = (signed char)-98;
int var_8 = -220145725;
unsigned int var_9 = 4187778729U;
signed char var_10 = (signed char)-46;
int zero = 0;
unsigned long long int var_12 = 14826645445759105341ULL;
unsigned char var_13 = (unsigned char)180;
unsigned char var_14 = (unsigned char)212;
signed char var_15 = (signed char)-21;
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
