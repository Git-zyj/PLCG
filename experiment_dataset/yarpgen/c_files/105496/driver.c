#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17756973042332805592ULL;
unsigned char var_4 = (unsigned char)223;
unsigned int var_5 = 3584320263U;
short var_6 = (short)15419;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)4;
int zero = 0;
unsigned int var_10 = 3681264363U;
short var_11 = (short)32763;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
