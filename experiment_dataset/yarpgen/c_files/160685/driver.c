#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-105;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)7237;
int var_11 = 1779803244;
int zero = 0;
int var_12 = 1746026448;
unsigned char var_13 = (unsigned char)31;
_Bool var_14 = (_Bool)0;
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
