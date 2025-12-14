#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)74;
unsigned long long int var_2 = 16841438221758212369ULL;
long long int var_5 = 1517577937819732362LL;
short var_8 = (short)-12899;
unsigned short var_9 = (unsigned short)21049;
unsigned char var_16 = (unsigned char)217;
unsigned char var_17 = (unsigned char)5;
unsigned int var_19 = 266645606U;
int zero = 0;
unsigned int var_20 = 1573316589U;
unsigned char var_21 = (unsigned char)247;
unsigned int var_22 = 8947267U;
unsigned int var_23 = 2354049104U;
int var_24 = -1323926875;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
