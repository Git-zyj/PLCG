#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)5;
_Bool var_3 = (_Bool)0;
unsigned int var_7 = 3995605512U;
_Bool var_9 = (_Bool)1;
int var_11 = -1500736617;
int zero = 0;
unsigned int var_12 = 253473307U;
unsigned int var_13 = 1580526248U;
void init() {
}

void checksum() {
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
