#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20782;
unsigned long long int var_3 = 4289257990540970673ULL;
unsigned short var_6 = (unsigned short)34632;
unsigned long long int var_7 = 554660285958610364ULL;
unsigned long long int var_11 = 1377168364381135990ULL;
int zero = 0;
signed char var_13 = (signed char)8;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
