#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
signed char var_2 = (signed char)-105;
_Bool var_4 = (_Bool)0;
long long int var_10 = -495373052005963691LL;
unsigned int var_14 = 1100463283U;
int zero = 0;
signed char var_17 = (signed char)-61;
long long int var_18 = 2656360731985900258LL;
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
