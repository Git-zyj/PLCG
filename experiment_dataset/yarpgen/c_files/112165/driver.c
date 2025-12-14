#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -703052039;
unsigned long long int var_2 = 12174979133491330996ULL;
unsigned long long int var_7 = 222990102037970223ULL;
unsigned long long int var_8 = 1607878416140938508ULL;
int var_10 = 981492165;
unsigned long long int var_11 = 18149073436176599275ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)27805;
int var_20 = 696921967;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)122;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
