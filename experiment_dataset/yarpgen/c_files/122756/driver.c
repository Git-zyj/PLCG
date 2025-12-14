#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2092592107;
int var_2 = 1496780540;
int var_3 = -500541306;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 78139315U;
unsigned short var_6 = (unsigned short)37821;
unsigned short var_7 = (unsigned short)10489;
unsigned short var_12 = (unsigned short)45788;
int zero = 0;
signed char var_13 = (signed char)-56;
int var_14 = 891745274;
void init() {
}

void checksum() {
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
