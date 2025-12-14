#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-69;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)50767;
int var_13 = 325786649;
int zero = 0;
int var_19 = 1476619290;
unsigned int var_20 = 884680580U;
void init() {
}

void checksum() {
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
