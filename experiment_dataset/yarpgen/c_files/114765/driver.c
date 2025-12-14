#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-1785;
signed char var_11 = (signed char)31;
_Bool var_14 = (_Bool)1;
long long int var_16 = 7613099492702953475LL;
int zero = 0;
signed char var_20 = (signed char)-90;
long long int var_21 = -5980430114920774621LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
