#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2051415320302546792LL;
unsigned short var_3 = (unsigned short)32035;
int var_5 = 2088906247;
unsigned char var_7 = (unsigned char)156;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)20109;
int var_18 = -985939461;
int zero = 0;
signed char var_20 = (signed char)-19;
unsigned short var_21 = (unsigned short)3974;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
