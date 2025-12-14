#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40064;
int var_1 = -1067033093;
unsigned short var_3 = (unsigned short)2682;
unsigned char var_7 = (unsigned char)238;
int var_9 = -496947797;
unsigned char var_11 = (unsigned char)120;
unsigned int var_14 = 4129305159U;
int zero = 0;
unsigned char var_16 = (unsigned char)118;
short var_17 = (short)-4430;
unsigned int var_18 = 3128788228U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
