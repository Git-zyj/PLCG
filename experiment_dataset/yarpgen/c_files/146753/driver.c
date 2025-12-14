#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8921753195609274602ULL;
unsigned short var_1 = (unsigned short)60433;
int var_2 = 1734829908;
unsigned short var_3 = (unsigned short)23245;
int var_5 = -873503903;
_Bool var_9 = (_Bool)1;
int var_10 = 680462370;
int zero = 0;
int var_11 = -2071435549;
unsigned char var_12 = (unsigned char)9;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
