#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2577;
unsigned int var_4 = 539226062U;
signed char var_6 = (signed char)-26;
unsigned char var_12 = (unsigned char)64;
unsigned int var_13 = 1158447969U;
unsigned char var_15 = (unsigned char)60;
short var_16 = (short)22098;
int var_17 = 2046333582;
int zero = 0;
unsigned char var_18 = (unsigned char)137;
unsigned int var_19 = 2013645816U;
long long int var_20 = 4264929395979464361LL;
unsigned char var_21 = (unsigned char)225;
short var_22 = (short)-7587;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
