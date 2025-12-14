#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14860444137884315883ULL;
signed char var_4 = (signed char)-107;
_Bool var_6 = (_Bool)1;
int var_11 = 1167884652;
long long int var_14 = 5810592166601356136LL;
int zero = 0;
long long int var_15 = 6980467388535944646LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
