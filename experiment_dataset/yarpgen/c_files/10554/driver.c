#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 4884123326014494622ULL;
unsigned int var_5 = 1183176085U;
short var_8 = (short)-26194;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)32199;
unsigned char var_14 = (unsigned char)82;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
