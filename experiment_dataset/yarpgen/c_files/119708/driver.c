#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)230;
unsigned int var_1 = 2440263551U;
unsigned short var_5 = (unsigned short)18986;
_Bool var_7 = (_Bool)1;
unsigned short var_11 = (unsigned short)49220;
int zero = 0;
unsigned char var_12 = (unsigned char)228;
long long int var_13 = 4931368091071907869LL;
signed char var_14 = (signed char)44;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
