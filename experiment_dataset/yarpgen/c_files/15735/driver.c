#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9223;
unsigned short var_7 = (unsigned short)4383;
unsigned long long int var_9 = 11104444257813061809ULL;
unsigned int var_10 = 736894207U;
unsigned int var_12 = 2452209573U;
int var_13 = 733280244;
unsigned int var_16 = 606101055U;
unsigned int var_18 = 1215365924U;
int zero = 0;
unsigned short var_20 = (unsigned short)49827;
unsigned char var_21 = (unsigned char)212;
unsigned short var_22 = (unsigned short)54326;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
