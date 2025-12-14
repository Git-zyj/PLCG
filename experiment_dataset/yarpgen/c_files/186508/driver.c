#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21023;
long long int var_2 = -2172565416080641190LL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)-68;
int zero = 0;
signed char var_10 = (signed char)113;
unsigned short var_11 = (unsigned short)4255;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)22395;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
