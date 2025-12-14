#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)17924;
_Bool var_8 = (_Bool)0;
long long int var_10 = 480160670727786624LL;
_Bool var_16 = (_Bool)0;
short var_18 = (short)-21048;
unsigned short var_19 = (unsigned short)942;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)58567;
long long int var_22 = -8285931153180402282LL;
unsigned short var_23 = (unsigned short)47037;
void init() {
}

void checksum() {
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
