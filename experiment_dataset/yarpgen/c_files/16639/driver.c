#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 221622748;
unsigned int var_3 = 3765214468U;
unsigned short var_6 = (unsigned short)10150;
short var_8 = (short)11770;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = -1326077187;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
