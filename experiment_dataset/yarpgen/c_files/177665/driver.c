#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -434546559;
unsigned short var_3 = (unsigned short)44994;
unsigned int var_4 = 3180606897U;
signed char var_5 = (signed char)87;
signed char var_6 = (signed char)-90;
int var_7 = 1264378695;
short var_9 = (short)-16809;
signed char var_11 = (signed char)-93;
int zero = 0;
int var_13 = -1216106149;
short var_14 = (short)-29956;
int var_15 = 1396576104;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
