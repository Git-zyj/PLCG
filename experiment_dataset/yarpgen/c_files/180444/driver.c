#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2831778462U;
short var_4 = (short)-13531;
unsigned int var_6 = 61863546U;
int zero = 0;
unsigned short var_10 = (unsigned short)45367;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-27;
int var_13 = 859080349;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
