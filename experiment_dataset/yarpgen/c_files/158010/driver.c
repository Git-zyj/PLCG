#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1720584541;
unsigned long long int var_1 = 10540553677893236034ULL;
long long int var_7 = 1332152612882940181LL;
unsigned short var_8 = (unsigned short)63852;
unsigned char var_9 = (unsigned char)73;
long long int var_13 = 2543246138673521804LL;
int var_16 = -1144265164;
int zero = 0;
short var_17 = (short)-5346;
short var_18 = (short)-10066;
unsigned char var_19 = (unsigned char)170;
unsigned int var_20 = 3596017074U;
unsigned short var_21 = (unsigned short)9572;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
