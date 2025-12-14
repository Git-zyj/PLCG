#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
int var_1 = -1225854042;
short var_5 = (short)-9738;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1399550622U;
int var_9 = 1789227237;
unsigned short var_11 = (unsigned short)39011;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -224495958;
void init() {
}

void checksum() {
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
