#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)13747;
unsigned int var_8 = 2680633248U;
long long int var_10 = -7513420086514970624LL;
unsigned long long int var_11 = 11438706971123181631ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)105;
unsigned short var_14 = (unsigned short)51120;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
