#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16250926430748129208ULL;
signed char var_2 = (signed char)106;
signed char var_4 = (signed char)55;
unsigned short var_8 = (unsigned short)32190;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)20667;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
