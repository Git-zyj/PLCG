#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2730172130409053302LL;
unsigned short var_1 = (unsigned short)15668;
long long int var_3 = 8046783544042360564LL;
long long int var_4 = 3979874680150148955LL;
unsigned char var_5 = (unsigned char)37;
unsigned int var_7 = 2654891703U;
unsigned int var_8 = 3773777488U;
short var_9 = (short)30018;
int zero = 0;
signed char var_12 = (signed char)-37;
unsigned char var_13 = (unsigned char)213;
int var_14 = -1310587183;
signed char var_15 = (signed char)84;
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
