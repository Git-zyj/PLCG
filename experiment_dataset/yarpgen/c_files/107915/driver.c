#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11204820543212029437ULL;
_Bool var_4 = (_Bool)0;
short var_7 = (short)-26949;
short var_11 = (short)16975;
signed char var_14 = (signed char)-21;
unsigned short var_18 = (unsigned short)65441;
int zero = 0;
long long int var_19 = -4452623943318295541LL;
signed char var_20 = (signed char)-90;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
