#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8994489603615147736ULL;
long long int var_5 = 8687618991773747212LL;
signed char var_6 = (signed char)83;
unsigned int var_7 = 1273115873U;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 601874313269264912ULL;
int var_11 = 1694651421;
unsigned short var_12 = (unsigned short)58779;
int zero = 0;
short var_16 = (short)1331;
long long int var_17 = 21420227244512104LL;
unsigned int var_18 = 2155562385U;
short var_19 = (short)1006;
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
