#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_5 = (unsigned short)55083;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 16002298429915028773ULL;
short var_10 = (short)-4224;
int zero = 0;
short var_11 = (short)-4340;
unsigned short var_12 = (unsigned short)7106;
long long int var_13 = -2229058807910376873LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
