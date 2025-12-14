#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 17574163993700498579ULL;
unsigned short var_5 = (unsigned short)7282;
_Bool var_6 = (_Bool)1;
short var_8 = (short)-16247;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)-12;
_Bool var_13 = (_Bool)0;
long long int var_14 = 1031419458582588031LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
