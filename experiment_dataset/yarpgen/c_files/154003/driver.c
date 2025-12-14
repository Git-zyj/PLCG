#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1564474155U;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 10292080286369951874ULL;
unsigned char var_9 = (unsigned char)95;
unsigned char var_10 = (unsigned char)60;
int var_12 = 1848136079;
unsigned char var_18 = (unsigned char)45;
int zero = 0;
int var_19 = 1687500883;
short var_20 = (short)-8637;
unsigned long long int var_21 = 13162258643931719355ULL;
void init() {
}

void checksum() {
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
