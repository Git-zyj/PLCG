#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1270447744;
short var_1 = (short)18060;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)90;
long long int var_5 = 7105764466015238272LL;
unsigned char var_6 = (unsigned char)198;
long long int var_7 = -1043114305152448549LL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 9632821257587212131ULL;
unsigned int var_11 = 903040216U;
int zero = 0;
unsigned int var_12 = 533302546U;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-21068;
unsigned short var_15 = (unsigned short)63624;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
