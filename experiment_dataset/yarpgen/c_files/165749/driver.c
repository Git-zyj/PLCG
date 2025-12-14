#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2913965492U;
unsigned int var_1 = 202581349U;
signed char var_3 = (signed char)52;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-23912;
unsigned int var_7 = 3934910153U;
_Bool var_8 = (_Bool)0;
int var_10 = -357851055;
int zero = 0;
long long int var_13 = 4989672231919011454LL;
unsigned char var_14 = (unsigned char)8;
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
