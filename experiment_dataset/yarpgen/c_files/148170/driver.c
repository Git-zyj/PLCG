#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23733;
short var_4 = (short)-8105;
_Bool var_16 = (_Bool)0;
int var_18 = -1984837884;
int zero = 0;
unsigned long long int var_20 = 11406553509153834180ULL;
int var_21 = -2060943871;
long long int var_22 = 6815430854579991228LL;
signed char var_23 = (signed char)-118;
unsigned long long int var_24 = 12263221012730677830ULL;
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
