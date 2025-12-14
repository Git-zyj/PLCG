#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)45;
unsigned char var_2 = (unsigned char)2;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-99;
unsigned int var_9 = 2707282210U;
signed char var_10 = (signed char)50;
unsigned long long int var_14 = 16750037249786997374ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)76;
unsigned char var_19 = (unsigned char)125;
unsigned int var_20 = 2745536571U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
