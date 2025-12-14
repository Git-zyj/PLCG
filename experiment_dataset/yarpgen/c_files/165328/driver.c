#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -726141732;
unsigned long long int var_2 = 4016839381668860452ULL;
unsigned short var_4 = (unsigned short)50990;
int var_6 = -899913175;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-86;
int zero = 0;
long long int var_12 = -2661560743100980370LL;
unsigned char var_13 = (unsigned char)204;
unsigned short var_14 = (unsigned short)32296;
unsigned short var_15 = (unsigned short)40044;
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
