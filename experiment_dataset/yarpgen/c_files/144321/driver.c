#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 849592547736939471ULL;
long long int var_1 = -8110940432029698140LL;
long long int var_2 = -6526534417180163782LL;
unsigned short var_3 = (unsigned short)46205;
unsigned int var_4 = 106167491U;
unsigned int var_5 = 2795148343U;
signed char var_6 = (signed char)99;
unsigned long long int var_7 = 5069931216477028228ULL;
long long int var_8 = -4172155351483770496LL;
int zero = 0;
long long int var_10 = -4074079315116074240LL;
unsigned char var_11 = (unsigned char)146;
unsigned short var_12 = (unsigned short)1006;
unsigned short var_13 = (unsigned short)10496;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
