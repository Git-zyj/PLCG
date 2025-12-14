#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2462620633U;
long long int var_1 = -196640154231569322LL;
unsigned int var_2 = 3324722457U;
unsigned int var_6 = 2662306813U;
unsigned short var_7 = (unsigned short)26371;
int var_8 = -1964073495;
short var_9 = (short)-11288;
unsigned int var_12 = 440967721U;
unsigned short var_14 = (unsigned short)17252;
signed char var_15 = (signed char)56;
signed char var_16 = (signed char)-38;
long long int var_17 = -5790354313984897452LL;
int var_18 = -1282565931;
unsigned char var_19 = (unsigned char)2;
int zero = 0;
unsigned long long int var_20 = 5190213164069346807ULL;
unsigned long long int var_21 = 11188451493877418442ULL;
unsigned long long int var_22 = 13700787808759994275ULL;
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
