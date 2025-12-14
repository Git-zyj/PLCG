#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)4783;
short var_7 = (short)-1579;
short var_13 = (short)6155;
long long int var_14 = 4478517525262501083LL;
unsigned char var_15 = (unsigned char)194;
short var_17 = (short)18917;
int zero = 0;
unsigned short var_19 = (unsigned short)8259;
unsigned long long int var_20 = 16667790176776027373ULL;
signed char var_21 = (signed char)54;
int var_22 = 1787278537;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
