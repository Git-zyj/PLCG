#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4293263487612226424LL;
unsigned short var_1 = (unsigned short)28412;
unsigned long long int var_3 = 5765089217654344407ULL;
unsigned short var_4 = (unsigned short)30428;
short var_6 = (short)-13356;
unsigned long long int var_7 = 5831846494646448732ULL;
unsigned short var_8 = (unsigned short)18645;
short var_9 = (short)-21850;
unsigned short var_11 = (unsigned short)13856;
int var_13 = 452468418;
int zero = 0;
unsigned char var_14 = (unsigned char)166;
int var_15 = 157416838;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
