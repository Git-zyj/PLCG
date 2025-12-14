#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 297879604U;
unsigned short var_3 = (unsigned short)57333;
unsigned long long int var_5 = 11127625122320290653ULL;
long long int var_6 = -3925071279386667305LL;
int var_8 = -1008125713;
_Bool var_10 = (_Bool)0;
int var_11 = 159154247;
int zero = 0;
short var_13 = (short)-32459;
unsigned char var_14 = (unsigned char)193;
unsigned int var_15 = 2886900593U;
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
