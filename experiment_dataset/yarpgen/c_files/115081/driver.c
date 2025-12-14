#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 938835630U;
signed char var_2 = (signed char)-45;
signed char var_3 = (signed char)58;
unsigned int var_10 = 3721414813U;
int zero = 0;
unsigned int var_11 = 3966194824U;
unsigned int var_12 = 2461616564U;
_Bool var_13 = (_Bool)0;
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
