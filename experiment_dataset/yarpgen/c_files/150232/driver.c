#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7838;
signed char var_4 = (signed char)-62;
unsigned char var_5 = (unsigned char)138;
unsigned short var_7 = (unsigned short)29092;
signed char var_8 = (signed char)73;
int var_9 = -1996848205;
signed char var_10 = (signed char)-65;
int zero = 0;
unsigned int var_11 = 935189605U;
unsigned int var_12 = 184759576U;
int var_13 = 1177775774;
unsigned int var_14 = 1342468728U;
unsigned short var_15 = (unsigned short)11799;
unsigned long long int var_16 = 7878720897251647134ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
