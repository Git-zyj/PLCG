#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -498125809746545567LL;
signed char var_4 = (signed char)34;
long long int var_5 = 402807489704666436LL;
_Bool var_7 = (_Bool)1;
int var_9 = 1123280470;
long long int var_12 = 819723575724962065LL;
short var_13 = (short)3038;
unsigned char var_18 = (unsigned char)240;
int zero = 0;
unsigned int var_19 = 3022622361U;
short var_20 = (short)-14888;
unsigned char var_21 = (unsigned char)210;
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
