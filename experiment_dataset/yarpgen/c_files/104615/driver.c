#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -865919311;
long long int var_1 = -6984544161536297210LL;
unsigned long long int var_2 = 10426276015535189312ULL;
unsigned long long int var_3 = 15184331121547625558ULL;
unsigned char var_4 = (unsigned char)115;
long long int var_7 = 1989926633544289961LL;
unsigned short var_8 = (unsigned short)5;
signed char var_11 = (signed char)-106;
unsigned short var_12 = (unsigned short)61865;
int zero = 0;
unsigned char var_13 = (unsigned char)20;
int var_14 = -1889010473;
long long int var_15 = 4482929866765341596LL;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
