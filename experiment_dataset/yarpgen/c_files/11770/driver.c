#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12635;
int var_5 = -1659983704;
unsigned int var_7 = 1193085U;
unsigned long long int var_8 = 2584371859340121271ULL;
unsigned short var_17 = (unsigned short)32947;
int zero = 0;
int var_18 = 891930635;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
