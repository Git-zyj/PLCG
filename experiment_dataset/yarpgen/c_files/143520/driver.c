#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16860421778386074936ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2684355441U;
long long int var_7 = 594358593827434995LL;
long long int var_9 = 5164737270108666292LL;
long long int var_10 = 2680938959616543058LL;
unsigned int var_14 = 2031543464U;
int zero = 0;
unsigned int var_15 = 2278441339U;
unsigned int var_16 = 2339779904U;
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
