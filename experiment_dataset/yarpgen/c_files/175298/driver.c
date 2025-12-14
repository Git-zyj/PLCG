#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2247245837U;
unsigned long long int var_1 = 6066872819846088368ULL;
short var_4 = (short)17740;
short var_5 = (short)-27027;
_Bool var_6 = (_Bool)0;
long long int var_8 = 5329000502688548212LL;
unsigned short var_10 = (unsigned short)43178;
unsigned short var_14 = (unsigned short)16103;
int var_15 = 623595703;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 17747878995801091724ULL;
signed char var_18 = (signed char)33;
unsigned long long int var_19 = 3408700934072606060ULL;
int var_20 = -1729479793;
_Bool var_21 = (_Bool)1;
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
