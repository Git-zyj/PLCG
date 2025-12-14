#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -966368647;
unsigned short var_3 = (unsigned short)26679;
unsigned short var_4 = (unsigned short)36340;
long long int var_5 = 3230647593286127856LL;
short var_7 = (short)19488;
unsigned char var_8 = (unsigned char)126;
unsigned int var_9 = 271661506U;
int var_11 = -593013575;
int zero = 0;
signed char var_13 = (signed char)-89;
short var_14 = (short)-25420;
unsigned char var_15 = (unsigned char)125;
long long int var_16 = -5542637955985324947LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
