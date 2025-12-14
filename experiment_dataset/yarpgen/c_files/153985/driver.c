#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27844;
signed char var_8 = (signed char)91;
_Bool var_13 = (_Bool)0;
int var_14 = 986950205;
int zero = 0;
long long int var_20 = 8116202248286068811LL;
_Bool var_21 = (_Bool)0;
long long int var_22 = -5259566266304492844LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
