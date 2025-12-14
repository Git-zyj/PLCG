#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31121;
short var_1 = (short)-21957;
signed char var_2 = (signed char)-83;
signed char var_6 = (signed char)-62;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 7087469245023355791LL;
void init() {
}

void checksum() {
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
