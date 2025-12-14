#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)88;
unsigned short var_2 = (unsigned short)18442;
unsigned char var_4 = (unsigned char)28;
unsigned int var_5 = 2067967904U;
_Bool var_6 = (_Bool)1;
int zero = 0;
int var_10 = 693933328;
long long int var_11 = 5321993307740210035LL;
short var_12 = (short)18719;
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
