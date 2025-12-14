#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10301087999290528194ULL;
long long int var_1 = -4816294878498528234LL;
unsigned int var_2 = 757759544U;
int var_4 = 466703154;
unsigned long long int var_6 = 11599211307924739890ULL;
short var_8 = (short)12559;
int var_9 = 2044103534;
unsigned int var_10 = 2911097770U;
unsigned long long int var_11 = 13167281023036020516ULL;
unsigned long long int var_14 = 11375386933934684292ULL;
unsigned int var_15 = 1232326717U;
unsigned long long int var_17 = 11072812798950497951ULL;
long long int var_18 = -245075140967064530LL;
int zero = 0;
signed char var_19 = (signed char)-105;
unsigned short var_20 = (unsigned short)9031;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
