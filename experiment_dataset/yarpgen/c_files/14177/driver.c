#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20235;
int var_3 = 837459433;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-23;
unsigned long long int var_11 = 6365780996593215791ULL;
short var_12 = (short)-32480;
unsigned char var_13 = (unsigned char)43;
int zero = 0;
unsigned short var_16 = (unsigned short)3342;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
