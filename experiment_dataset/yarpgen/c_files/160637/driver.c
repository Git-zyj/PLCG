#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)28329;
signed char var_8 = (signed char)26;
short var_9 = (short)21372;
unsigned short var_15 = (unsigned short)16308;
int zero = 0;
unsigned int var_16 = 1861055794U;
unsigned long long int var_17 = 5726016912966962844ULL;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 4220379883U;
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
