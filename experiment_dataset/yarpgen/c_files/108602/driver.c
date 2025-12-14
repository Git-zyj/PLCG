#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15039670411384773660ULL;
short var_2 = (short)-16588;
short var_4 = (short)31333;
unsigned long long int var_8 = 8652040380371828833ULL;
short var_10 = (short)26686;
unsigned long long int var_12 = 15825465185231863203ULL;
unsigned long long int var_13 = 9514539780872120025ULL;
short var_14 = (short)19634;
int zero = 0;
unsigned long long int var_15 = 7742845545141685383ULL;
unsigned long long int var_16 = 16373038243776892636ULL;
unsigned long long int var_17 = 2977000325524281870ULL;
unsigned long long int var_18 = 8488852318980861144ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
