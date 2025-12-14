#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 7011531772970645601ULL;
unsigned short var_6 = (unsigned short)32915;
unsigned char var_9 = (unsigned char)113;
_Bool var_10 = (_Bool)1;
long long int var_11 = 4121663677892311971LL;
int zero = 0;
unsigned short var_12 = (unsigned short)57414;
unsigned long long int var_13 = 10138752783610183331ULL;
unsigned short var_14 = (unsigned short)29619;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
