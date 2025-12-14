#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7986;
signed char var_1 = (signed char)80;
int var_2 = -702225271;
unsigned long long int var_4 = 6682212441454617214ULL;
signed char var_5 = (signed char)74;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)121;
unsigned long long int var_8 = 18102673360345633053ULL;
_Bool var_9 = (_Bool)0;
short var_12 = (short)-5112;
unsigned long long int var_14 = 6908737251839773025ULL;
short var_15 = (short)10657;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)39;
void init() {
}

void checksum() {
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
