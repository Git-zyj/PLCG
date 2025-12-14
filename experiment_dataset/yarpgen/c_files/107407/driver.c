#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
unsigned int var_4 = 1784717738U;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3059749708U;
long long int var_8 = -2596435827756124522LL;
long long int var_9 = 4845556938507344440LL;
int zero = 0;
unsigned char var_11 = (unsigned char)228;
signed char var_12 = (signed char)-53;
signed char var_13 = (signed char)-18;
unsigned short var_14 = (unsigned short)31042;
void init() {
}

void checksum() {
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
