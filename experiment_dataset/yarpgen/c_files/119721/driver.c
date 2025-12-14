#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18358245207430034816ULL;
unsigned int var_2 = 3539761267U;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
signed char var_11 = (signed char)94;
unsigned int var_17 = 2925156319U;
int zero = 0;
unsigned int var_19 = 2852989372U;
short var_20 = (short)14238;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
