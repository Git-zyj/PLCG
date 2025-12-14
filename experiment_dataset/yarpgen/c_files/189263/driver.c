#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 314391599;
long long int var_2 = -6133043709731424153LL;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)65;
unsigned short var_6 = (unsigned short)12491;
unsigned int var_7 = 4229045070U;
unsigned char var_8 = (unsigned char)216;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 284116379U;
signed char var_11 = (signed char)-92;
int zero = 0;
unsigned char var_13 = (unsigned char)119;
unsigned int var_14 = 2593352424U;
unsigned short var_15 = (unsigned short)41942;
unsigned short var_16 = (unsigned short)24626;
long long int var_17 = 470700640550406452LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
