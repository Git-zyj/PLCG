#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6447723746234522009ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 3531768489659486703ULL;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)84;
unsigned long long int var_13 = 10413941949071704588ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
