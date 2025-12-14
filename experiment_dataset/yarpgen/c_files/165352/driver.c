#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)35062;
unsigned short var_5 = (unsigned short)58830;
unsigned int var_6 = 2917706106U;
unsigned long long int var_8 = 1034003883224262076ULL;
unsigned char var_9 = (unsigned char)62;
int zero = 0;
long long int var_11 = 107790667518728742LL;
unsigned int var_12 = 3049898802U;
int var_13 = 1502725228;
int var_14 = 631380026;
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
