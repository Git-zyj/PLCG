#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 123316940;
_Bool var_8 = (_Bool)0;
int var_13 = -242605184;
int var_16 = 974932571;
unsigned short var_17 = (unsigned short)38913;
int zero = 0;
int var_20 = 67470666;
int var_21 = -472309956;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
