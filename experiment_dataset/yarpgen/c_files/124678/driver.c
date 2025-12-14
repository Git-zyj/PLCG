#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)9;
unsigned long long int var_1 = 10639637614443720397ULL;
short var_2 = (short)-28224;
unsigned long long int var_3 = 2938101247248840444ULL;
_Bool var_6 = (_Bool)0;
long long int var_8 = 1478494174552610105LL;
short var_13 = (short)-22461;
signed char var_14 = (signed char)-40;
signed char var_16 = (signed char)74;
int zero = 0;
unsigned long long int var_17 = 886608358877260882ULL;
unsigned long long int var_18 = 7375234739261907823ULL;
unsigned short var_19 = (unsigned short)19968;
unsigned long long int var_20 = 7761382766224609331ULL;
_Bool var_21 = (_Bool)0;
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
