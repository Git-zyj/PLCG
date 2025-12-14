#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1218231812;
int var_4 = -1619657336;
unsigned short var_7 = (unsigned short)40575;
int var_9 = -39088773;
unsigned int var_16 = 3039911964U;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-9259;
int zero = 0;
unsigned long long int var_20 = 16459341845024046210ULL;
unsigned long long int var_21 = 1836771577538643715ULL;
short var_22 = (short)-14195;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
