#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2291542915683220219LL;
unsigned int var_6 = 2211293244U;
int var_7 = -144235992;
long long int var_10 = -715811449540665542LL;
unsigned int var_11 = 3662396117U;
signed char var_12 = (signed char)58;
int zero = 0;
unsigned short var_13 = (unsigned short)25296;
int var_14 = -328548783;
_Bool var_15 = (_Bool)1;
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
