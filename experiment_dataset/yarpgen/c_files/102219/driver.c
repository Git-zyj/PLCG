#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)170;
short var_6 = (short)14019;
long long int var_9 = 4994312054294853863LL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 3935054407451445680ULL;
unsigned char var_14 = (unsigned char)233;
unsigned char var_16 = (unsigned char)76;
unsigned long long int var_18 = 6060871233500310143ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)232;
long long int var_21 = 1851571458278586682LL;
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
