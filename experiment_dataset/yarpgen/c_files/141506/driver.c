#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_7 = (unsigned char)114;
_Bool var_8 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)21296;
int zero = 0;
int var_17 = -1742558086;
unsigned char var_18 = (unsigned char)125;
short var_19 = (short)-11732;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
