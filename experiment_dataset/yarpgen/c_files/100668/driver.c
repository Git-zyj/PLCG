#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -388329725;
unsigned long long int var_2 = 5203421126417285733ULL;
unsigned long long int var_6 = 1496928950839179622ULL;
int var_7 = -267005958;
signed char var_9 = (signed char)-9;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)-121;
unsigned short var_15 = (unsigned short)15659;
unsigned long long int var_17 = 1127609363018610787ULL;
int zero = 0;
int var_18 = 417220387;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
