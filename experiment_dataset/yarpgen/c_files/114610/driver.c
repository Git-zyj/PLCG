#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)34;
unsigned int var_5 = 3739928122U;
unsigned long long int var_10 = 17781399480315380203ULL;
unsigned int var_14 = 4097385804U;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3161755605U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
