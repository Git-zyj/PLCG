#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1648603950U;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 9354179280007178199ULL;
int zero = 0;
unsigned long long int var_19 = 6091869159682655345ULL;
unsigned int var_20 = 3488216362U;
long long int var_21 = -6025308287084271974LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
