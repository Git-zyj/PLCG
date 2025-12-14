#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17946452684925927463ULL;
unsigned int var_2 = 1946243332U;
unsigned short var_3 = (unsigned short)46661;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 5008548413674374932ULL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)87;
int zero = 0;
unsigned short var_13 = (unsigned short)41991;
unsigned short var_14 = (unsigned short)8448;
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
