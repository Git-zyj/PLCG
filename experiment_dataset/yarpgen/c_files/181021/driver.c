#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 7327820133914044010ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 1878265344U;
signed char var_11 = (signed char)-106;
unsigned long long int var_12 = 6825262950128174030ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)243;
unsigned long long int var_15 = 7313588938661857747ULL;
unsigned long long int var_16 = 8461765994277998842ULL;
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
