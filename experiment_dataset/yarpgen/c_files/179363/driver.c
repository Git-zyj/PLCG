#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -151733373;
short var_2 = (short)20296;
unsigned short var_4 = (unsigned short)59163;
unsigned char var_5 = (unsigned char)30;
long long int var_7 = 8311471812351114494LL;
unsigned long long int var_8 = 10232670335324425705ULL;
signed char var_9 = (signed char)-69;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)31;
short var_12 = (short)-18892;
int zero = 0;
unsigned short var_13 = (unsigned short)61608;
short var_14 = (short)-14572;
int var_15 = -162684474;
unsigned char var_16 = (unsigned char)62;
void init() {
}

void checksum() {
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
