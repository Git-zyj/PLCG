#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51932;
_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)21386;
unsigned int var_11 = 2231190868U;
int zero = 0;
unsigned short var_12 = (unsigned short)40386;
signed char var_13 = (signed char)68;
int var_14 = -1845534405;
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
