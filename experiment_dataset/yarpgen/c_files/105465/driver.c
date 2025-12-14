#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2486898808021737902ULL;
_Bool var_4 = (_Bool)1;
short var_7 = (short)22610;
int zero = 0;
unsigned char var_11 = (unsigned char)249;
unsigned long long int var_12 = 17000951592704122930ULL;
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
