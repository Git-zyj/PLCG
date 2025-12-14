#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -370437636475534010LL;
unsigned char var_2 = (unsigned char)60;
short var_3 = (short)-31963;
signed char var_4 = (signed char)54;
unsigned short var_5 = (unsigned short)13773;
long long int var_7 = -3923999675302336775LL;
signed char var_8 = (signed char)40;
unsigned int var_10 = 3014294332U;
int zero = 0;
long long int var_11 = 1057059966217173303LL;
signed char var_12 = (signed char)100;
int var_13 = -1928911864;
unsigned short var_14 = (unsigned short)39402;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
