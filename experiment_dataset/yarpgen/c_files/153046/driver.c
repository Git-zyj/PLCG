#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3248397763U;
unsigned int var_3 = 2260868490U;
int var_8 = -496157309;
unsigned char var_9 = (unsigned char)71;
short var_11 = (short)-2651;
int var_13 = -1967363857;
int zero = 0;
unsigned int var_15 = 3052482406U;
int var_16 = -506251467;
signed char var_17 = (signed char)40;
int var_18 = 1190650836;
unsigned short var_19 = (unsigned short)19663;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
