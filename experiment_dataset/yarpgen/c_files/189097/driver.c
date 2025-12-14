#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-57;
unsigned int var_2 = 3259009202U;
int var_3 = 437200010;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)11;
short var_7 = (short)-11879;
unsigned short var_8 = (unsigned short)10540;
short var_9 = (short)14130;
short var_10 = (short)-10496;
short var_11 = (short)-4212;
short var_12 = (short)-28677;
int zero = 0;
int var_14 = -2109884740;
unsigned int var_15 = 4152586681U;
int var_16 = -1074142909;
void init() {
}

void checksum() {
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
