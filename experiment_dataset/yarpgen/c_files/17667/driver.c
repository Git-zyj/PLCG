#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)23;
signed char var_3 = (signed char)-57;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 3653751619U;
int zero = 0;
long long int var_13 = -306592940638713180LL;
unsigned long long int var_14 = 10633980607526598322ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
