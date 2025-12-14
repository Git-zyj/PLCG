#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4297842777213144704ULL;
long long int var_9 = 2991570385758813548LL;
int zero = 0;
signed char var_16 = (signed char)-21;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2253051633U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
