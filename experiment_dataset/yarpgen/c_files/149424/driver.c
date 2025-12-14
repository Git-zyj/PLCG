#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-123;
signed char var_1 = (signed char)19;
unsigned short var_8 = (unsigned short)38517;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)5;
signed char var_18 = (signed char)106;
long long int var_19 = 3595620063312164996LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
