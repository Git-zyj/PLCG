#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)35;
unsigned short var_1 = (unsigned short)39738;
unsigned short var_2 = (unsigned short)42454;
unsigned int var_3 = 2506897129U;
short var_8 = (short)16089;
unsigned short var_9 = (unsigned short)4836;
int zero = 0;
unsigned int var_10 = 955974262U;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
