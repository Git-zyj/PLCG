#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4126998084881385050LL;
signed char var_7 = (signed char)-93;
_Bool var_8 = (_Bool)1;
int var_12 = -1769943065;
long long int var_13 = 986367324091477388LL;
int zero = 0;
unsigned short var_17 = (unsigned short)2890;
short var_18 = (short)19794;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
