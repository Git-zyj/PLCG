#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)238;
short var_1 = (short)-7984;
unsigned short var_2 = (unsigned short)46858;
long long int var_3 = -8489893867092512605LL;
unsigned long long int var_6 = 16855802433084528300ULL;
short var_7 = (short)-26940;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
signed char var_15 = (signed char)-86;
int zero = 0;
short var_16 = (short)14682;
int var_17 = -292952904;
unsigned short var_18 = (unsigned short)56386;
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
