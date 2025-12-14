#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)20666;
signed char var_5 = (signed char)108;
short var_9 = (short)10423;
unsigned int var_18 = 3977712423U;
int zero = 0;
long long int var_20 = 9197174205391141715LL;
signed char var_21 = (signed char)2;
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
