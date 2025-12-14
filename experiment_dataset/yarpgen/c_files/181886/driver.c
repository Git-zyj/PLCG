#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -38706003;
signed char var_2 = (signed char)26;
unsigned long long int var_3 = 6232245892902013370ULL;
unsigned short var_4 = (unsigned short)15381;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 12992353612653078345ULL;
unsigned char var_10 = (unsigned char)197;
short var_11 = (short)-22997;
int zero = 0;
short var_13 = (short)-26024;
unsigned int var_14 = 3037992039U;
unsigned int var_15 = 1392175509U;
int var_16 = 1477984248;
void init() {
}

void checksum() {
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
