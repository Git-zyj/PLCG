#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
unsigned short var_1 = (unsigned short)54117;
unsigned short var_3 = (unsigned short)50293;
unsigned short var_5 = (unsigned short)36551;
unsigned char var_6 = (unsigned char)200;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2330754657U;
signed char var_9 = (signed char)-91;
int zero = 0;
unsigned int var_11 = 903661867U;
short var_12 = (short)13394;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)67;
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
