#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-112;
_Bool var_8 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int var_13 = -414560612;
unsigned char var_14 = (unsigned char)243;
signed char var_15 = (signed char)-89;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 1345113857;
int var_18 = -1714012930;
long long int var_19 = 7787520039197557363LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
