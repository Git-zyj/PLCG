#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 567080668;
int var_1 = 1925394993;
int var_4 = 963407184;
long long int var_7 = -2831165141313620449LL;
int var_8 = -697325880;
unsigned int var_10 = 3146382270U;
int var_11 = 1401107815;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-65;
int zero = 0;
unsigned short var_14 = (unsigned short)4601;
long long int var_15 = 4987814830527018583LL;
unsigned short var_16 = (unsigned short)26668;
short var_17 = (short)22443;
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
