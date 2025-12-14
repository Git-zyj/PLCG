#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
_Bool var_3 = (_Bool)0;
int var_10 = -1861220318;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 1827401542282898359ULL;
int var_19 = -286399632;
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
