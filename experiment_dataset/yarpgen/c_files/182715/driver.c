#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 89804247U;
unsigned short var_2 = (unsigned short)8676;
long long int var_3 = 3668089549448370224LL;
unsigned int var_4 = 616838592U;
long long int var_5 = 2180549140854950330LL;
signed char var_6 = (signed char)-123;
long long int var_8 = -8427433259117265500LL;
_Bool var_10 = (_Bool)1;
long long int var_13 = -6938771013763848625LL;
unsigned char var_14 = (unsigned char)37;
unsigned short var_15 = (unsigned short)32122;
unsigned char var_17 = (unsigned char)72;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 6211081328621343343LL;
unsigned int var_20 = 678408935U;
signed char var_21 = (signed char)37;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
