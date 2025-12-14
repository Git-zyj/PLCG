#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1881048495716084065ULL;
short var_7 = (short)8177;
long long int var_8 = 4429901048780830127LL;
int zero = 0;
short var_18 = (short)28512;
unsigned long long int var_19 = 15902305316141241859ULL;
unsigned char var_20 = (unsigned char)71;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
