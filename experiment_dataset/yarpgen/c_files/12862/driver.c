#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34682;
unsigned char var_1 = (unsigned char)214;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-20493;
short var_5 = (short)6102;
int zero = 0;
unsigned int var_12 = 496428454U;
unsigned short var_13 = (unsigned short)42588;
signed char var_14 = (signed char)94;
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
