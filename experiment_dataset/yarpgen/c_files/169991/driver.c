#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1381919426;
signed char var_2 = (signed char)-1;
int var_3 = -1306877651;
int var_4 = 2013760231;
signed char var_5 = (signed char)36;
signed char var_6 = (signed char)-56;
signed char var_8 = (signed char)-7;
unsigned long long int var_9 = 9456433766537292393ULL;
unsigned short var_10 = (unsigned short)1516;
unsigned long long int var_12 = 6863774301010868320ULL;
int zero = 0;
signed char var_16 = (signed char)11;
signed char var_17 = (signed char)49;
unsigned long long int var_18 = 4079658078355757064ULL;
signed char var_19 = (signed char)-70;
int var_20 = -1626361840;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
