#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -335728557;
unsigned int var_1 = 988389151U;
unsigned int var_3 = 3207047175U;
short var_4 = (short)5799;
unsigned short var_5 = (unsigned short)8370;
_Bool var_7 = (_Bool)0;
int var_9 = 1079328521;
short var_10 = (short)-10168;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-95;
int var_14 = -1293989339;
unsigned char var_15 = (unsigned char)119;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
