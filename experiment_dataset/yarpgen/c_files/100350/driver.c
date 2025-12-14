#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -166359581;
_Bool var_1 = (_Bool)1;
int var_4 = -2110973397;
short var_5 = (short)27819;
int var_6 = -1993138814;
unsigned short var_7 = (unsigned short)7799;
signed char var_8 = (signed char)-21;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-30082;
int zero = 0;
short var_12 = (short)-9682;
signed char var_13 = (signed char)-51;
unsigned short var_14 = (unsigned short)65187;
unsigned long long int var_15 = 10275655347334989515ULL;
signed char var_16 = (signed char)-51;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
