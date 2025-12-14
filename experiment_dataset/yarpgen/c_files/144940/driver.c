#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1216069305U;
unsigned int var_8 = 2693358884U;
unsigned long long int var_11 = 935798452886628914ULL;
unsigned int var_12 = 881924320U;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_18 = 612809542;
unsigned int var_19 = 2616891151U;
unsigned int var_20 = 4248086040U;
signed char var_21 = (signed char)13;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
