#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18120;
unsigned long long int var_2 = 14937345475920901442ULL;
unsigned int var_4 = 1328218993U;
long long int var_7 = -8543793164312157336LL;
signed char var_8 = (signed char)-65;
int var_9 = 570997548;
long long int var_10 = -7592926650711845719LL;
unsigned int var_11 = 517313649U;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)25345;
long long int var_16 = 1327900637656595425LL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
