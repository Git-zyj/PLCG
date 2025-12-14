#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11616513407776566326ULL;
unsigned short var_1 = (unsigned short)29020;
unsigned int var_18 = 2322185190U;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 1257971592;
unsigned long long int var_22 = 16947480101740154965ULL;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
