#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1319239113;
_Bool var_5 = (_Bool)1;
long long int var_6 = 7392923700956098006LL;
long long int var_7 = -2390478072092341220LL;
signed char var_11 = (signed char)2;
unsigned short var_16 = (unsigned short)60652;
int zero = 0;
unsigned char var_20 = (unsigned char)116;
int var_21 = -479556137;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)58226;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
