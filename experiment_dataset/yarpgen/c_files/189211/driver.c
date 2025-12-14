#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1728212210535913025ULL;
unsigned short var_1 = (unsigned short)48035;
unsigned long long int var_3 = 13201268900743841345ULL;
int var_5 = -679599841;
int var_6 = -173480853;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 15378548090877354025ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 15426792926839255479ULL;
unsigned short var_11 = (unsigned short)30883;
unsigned long long int var_12 = 4913991016943228519ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
