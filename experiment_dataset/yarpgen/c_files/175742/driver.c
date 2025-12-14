#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)49;
int var_1 = -1414292675;
long long int var_7 = -1989068871461348569LL;
long long int var_10 = -4154823225059173107LL;
int zero = 0;
long long int var_11 = -8796190631748571507LL;
unsigned int var_12 = 2294500483U;
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
