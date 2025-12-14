#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 180834684U;
int var_1 = 1978461766;
signed char var_3 = (signed char)-30;
int var_4 = -570614587;
unsigned short var_5 = (unsigned short)37992;
unsigned short var_7 = (unsigned short)34322;
short var_10 = (short)-7887;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)40;
signed char var_13 = (signed char)-21;
unsigned char var_14 = (unsigned char)235;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
