#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)251;
unsigned int var_3 = 2237382501U;
int var_6 = 1139771850;
unsigned int var_7 = 2196206306U;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1402501101U;
signed char var_11 = (signed char)-100;
unsigned long long int var_12 = 4213396901770147265ULL;
unsigned int var_14 = 3361530693U;
int var_15 = 1787000354;
int zero = 0;
unsigned char var_17 = (unsigned char)226;
int var_18 = -1867342268;
long long int var_19 = 8851872200480673391LL;
short var_20 = (short)6060;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
