#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32151;
unsigned long long int var_2 = 13716775752838233373ULL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)26424;
short var_7 = (short)-18213;
unsigned long long int var_8 = 11154609200837997417ULL;
unsigned int var_9 = 637634681U;
long long int var_13 = 4696727681099972790LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 16615276163015998576ULL;
int var_19 = 1190863559;
short var_20 = (short)-7024;
long long int var_21 = -1349167352788731944LL;
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
