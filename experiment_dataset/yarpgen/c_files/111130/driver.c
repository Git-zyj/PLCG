#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)116;
int var_2 = 2002273099;
unsigned long long int var_3 = 9870595120583257340ULL;
int var_4 = 1689682917;
unsigned char var_6 = (unsigned char)91;
unsigned long long int var_10 = 3501436519753179444ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)194;
short var_13 = (short)26735;
unsigned char var_14 = (unsigned char)205;
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
