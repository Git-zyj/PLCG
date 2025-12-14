#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18326451070016552640ULL;
unsigned int var_2 = 820444976U;
long long int var_3 = 5327609898300293482LL;
short var_6 = (short)-14279;
_Bool var_8 = (_Bool)0;
long long int var_9 = 3805491729450482931LL;
int var_12 = -748238982;
signed char var_13 = (signed char)64;
int var_14 = 396164338;
unsigned int var_15 = 718835002U;
unsigned long long int var_17 = 18087351931079234922ULL;
unsigned long long int var_18 = 5160130637980210093ULL;
int zero = 0;
signed char var_20 = (signed char)-89;
unsigned long long int var_21 = 3887321543354855500ULL;
unsigned long long int var_22 = 8064732191784433202ULL;
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
