#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)50;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-31222;
signed char var_10 = (signed char)24;
unsigned char var_15 = (unsigned char)121;
signed char var_19 = (signed char)115;
int zero = 0;
unsigned short var_20 = (unsigned short)38779;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
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
