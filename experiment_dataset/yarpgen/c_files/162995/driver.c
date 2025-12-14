#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_3 = 1302103713;
unsigned int var_10 = 2755851748U;
int var_12 = -457449910;
int var_13 = -104275390;
unsigned long long int var_15 = 12905493152940077812ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)53445;
unsigned long long int var_20 = 9289554833875261339ULL;
unsigned short var_21 = (unsigned short)54734;
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
