#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62902;
_Bool var_3 = (_Bool)1;
unsigned long long int var_8 = 5643823402737815119ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)85;
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
