#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1985907945;
unsigned short var_4 = (unsigned short)61129;
short var_7 = (short)12827;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)39034;
short var_12 = (short)-25898;
int zero = 0;
int var_17 = -544993303;
unsigned short var_18 = (unsigned short)4415;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 11518045088574022297ULL;
unsigned long long int var_21 = 8198847982798903884ULL;
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
