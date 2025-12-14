#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)96;
unsigned char var_1 = (unsigned char)142;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)20;
long long int var_18 = 1578936830935502722LL;
unsigned char var_19 = (unsigned char)18;
unsigned char var_20 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
