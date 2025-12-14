#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)36428;
long long int var_8 = 8773717058376103697LL;
unsigned char var_10 = (unsigned char)7;
unsigned long long int var_11 = 11005328145949055449ULL;
long long int var_12 = -2386886499202752843LL;
int var_15 = -1410743488;
long long int var_16 = 1188364726562046827LL;
long long int var_17 = 7672407098830843890LL;
signed char var_19 = (signed char)77;
int zero = 0;
unsigned short var_20 = (unsigned short)2695;
signed char var_21 = (signed char)-121;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-54;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
