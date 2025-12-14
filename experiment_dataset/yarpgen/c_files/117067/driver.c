#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12153690146088989835ULL;
unsigned short var_1 = (unsigned short)21632;
unsigned short var_2 = (unsigned short)34473;
unsigned short var_3 = (unsigned short)58231;
unsigned long long int var_4 = 12198469433977849797ULL;
long long int var_5 = 2708042363912990448LL;
short var_7 = (short)-24949;
unsigned short var_8 = (unsigned short)22469;
unsigned int var_9 = 1200491347U;
int zero = 0;
signed char var_10 = (signed char)55;
int var_11 = -35753894;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
