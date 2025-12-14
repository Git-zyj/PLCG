#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 4410338529493312763ULL;
unsigned long long int var_5 = 16824039713834753012ULL;
unsigned char var_10 = (unsigned char)155;
unsigned int var_11 = 3604168692U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 18096671714307843608ULL;
unsigned int var_17 = 3230332557U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
