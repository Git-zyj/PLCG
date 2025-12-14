#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 182658050;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)-23;
unsigned short var_11 = (unsigned short)3847;
int zero = 0;
unsigned long long int var_13 = 17033979356380789010ULL;
int var_14 = -1457089119;
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
