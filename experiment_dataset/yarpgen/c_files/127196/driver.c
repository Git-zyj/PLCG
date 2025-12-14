#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)28030;
signed char var_6 = (signed char)-61;
short var_8 = (short)8843;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 2073553326533554648ULL;
unsigned char var_14 = (unsigned char)114;
int zero = 0;
long long int var_17 = 3711188746523779890LL;
long long int var_18 = -235755318207542142LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
