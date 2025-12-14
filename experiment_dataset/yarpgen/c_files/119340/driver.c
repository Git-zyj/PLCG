#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -174674336;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 3870723035396037852ULL;
int zero = 0;
signed char var_11 = (signed char)59;
signed char var_12 = (signed char)-104;
signed char var_13 = (signed char)-112;
void init() {
}

void checksum() {
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
