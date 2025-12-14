#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1622732596;
unsigned char var_3 = (unsigned char)253;
unsigned char var_4 = (unsigned char)159;
unsigned int var_5 = 4058784145U;
long long int var_6 = -4316542836765249366LL;
_Bool var_7 = (_Bool)0;
int var_8 = -892139976;
int var_9 = 1268887715;
int zero = 0;
long long int var_10 = 3873609251542627978LL;
unsigned char var_11 = (unsigned char)7;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)5561;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
