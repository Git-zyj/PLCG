#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-106;
signed char var_5 = (signed char)-81;
unsigned short var_8 = (unsigned short)46459;
long long int var_11 = 5070492151311617566LL;
unsigned int var_13 = 401486259U;
unsigned int var_14 = 862417466U;
short var_15 = (short)30207;
unsigned short var_16 = (unsigned short)15721;
int zero = 0;
unsigned short var_17 = (unsigned short)56648;
unsigned int var_18 = 3480333700U;
unsigned long long int var_19 = 18147471295691913599ULL;
unsigned int var_20 = 2622669895U;
unsigned int var_21 = 3015626508U;
unsigned int var_22 = 3387579571U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
