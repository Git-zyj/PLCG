#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_5 = -5587601149490978206LL;
_Bool var_6 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)180;
int var_13 = 1023361182;
unsigned char var_18 = (unsigned char)181;
int zero = 0;
unsigned char var_20 = (unsigned char)247;
int var_21 = -2084901965;
int var_22 = -792647532;
void init() {
}

void checksum() {
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
