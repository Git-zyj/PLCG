#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1626;
long long int var_1 = 1330346659595510719LL;
unsigned int var_5 = 3055610199U;
unsigned char var_6 = (unsigned char)197;
short var_7 = (short)-12292;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-97;
void init() {
}

void checksum() {
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
