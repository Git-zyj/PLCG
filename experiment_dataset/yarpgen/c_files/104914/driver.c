#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_4 = 10496049472839770276ULL;
unsigned long long int var_9 = 6871842201413652860ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)177;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 4162005620480649476ULL;
short var_13 = (short)23952;
unsigned long long int var_14 = 18439237118712631164ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
