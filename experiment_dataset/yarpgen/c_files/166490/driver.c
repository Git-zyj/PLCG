#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)8;
unsigned long long int var_3 = 7932725490145221205ULL;
unsigned long long int var_13 = 16039551441603740413ULL;
unsigned long long int var_14 = 3782381062620760997ULL;
unsigned long long int var_15 = 3394616800350670065ULL;
int zero = 0;
unsigned int var_19 = 1565690504U;
signed char var_20 = (signed char)-43;
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
