#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1143470049;
_Bool var_3 = (_Bool)0;
unsigned char var_11 = (unsigned char)128;
unsigned long long int var_12 = 15184228066657868989ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)106;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
