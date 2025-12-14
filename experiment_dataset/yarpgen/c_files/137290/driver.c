#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12091;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)49;
unsigned int var_5 = 637543924U;
unsigned short var_6 = (unsigned short)150;
int var_7 = -19667641;
unsigned char var_10 = (unsigned char)40;
unsigned int var_11 = 198508785U;
int zero = 0;
int var_12 = 1200839217;
unsigned int var_13 = 3077989933U;
unsigned short var_14 = (unsigned short)6564;
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
