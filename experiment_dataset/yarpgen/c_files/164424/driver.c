#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 3734603414U;
_Bool var_4 = (_Bool)0;
int var_5 = -449985202;
unsigned int var_6 = 1298100440U;
short var_7 = (short)-5247;
int var_8 = -861320789;
_Bool var_10 = (_Bool)0;
int var_11 = -1830023178;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)54680;
unsigned int var_14 = 3155310654U;
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
