#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34867;
_Bool var_2 = (_Bool)0;
short var_7 = (short)-7652;
long long int var_8 = 4018225273900419360LL;
_Bool var_9 = (_Bool)0;
long long int var_13 = -1576621939350940734LL;
unsigned char var_14 = (unsigned char)138;
int zero = 0;
unsigned int var_15 = 1017788583U;
unsigned short var_16 = (unsigned short)37437;
long long int var_17 = -2262784491775467842LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
