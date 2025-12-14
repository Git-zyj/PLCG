#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 8076025211019750466LL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)13203;
signed char var_17 = (signed char)-111;
int zero = 0;
unsigned char var_20 = (unsigned char)60;
signed char var_21 = (signed char)-125;
void init() {
}

void checksum() {
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
