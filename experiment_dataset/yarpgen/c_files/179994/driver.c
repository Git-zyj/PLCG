#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)432;
int var_4 = -939581322;
unsigned short var_5 = (unsigned short)94;
int var_6 = 2068952373;
unsigned char var_10 = (unsigned char)28;
short var_11 = (short)-2917;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 8880872137477772923ULL;
int var_20 = 897251444;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
