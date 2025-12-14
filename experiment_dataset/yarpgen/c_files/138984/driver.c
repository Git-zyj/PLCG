#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1141093109734386405LL;
short var_5 = (short)15090;
unsigned int var_8 = 2843731922U;
signed char var_11 = (signed char)88;
signed char var_12 = (signed char)-2;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 2175185471680505361ULL;
long long int var_16 = -7642244500683577185LL;
void init() {
}

void checksum() {
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
