#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)32;
unsigned char var_1 = (unsigned char)128;
unsigned char var_2 = (unsigned char)16;
int var_3 = 25757350;
unsigned char var_4 = (unsigned char)170;
signed char var_6 = (signed char)69;
unsigned char var_7 = (unsigned char)231;
signed char var_8 = (signed char)57;
unsigned int var_9 = 1652085396U;
int zero = 0;
unsigned int var_10 = 3877118498U;
unsigned char var_11 = (unsigned char)190;
unsigned int var_12 = 153069371U;
long long int var_13 = -1426103261327386247LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
