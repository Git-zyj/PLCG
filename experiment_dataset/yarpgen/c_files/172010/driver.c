#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17655285753252313908ULL;
_Bool var_4 = (_Bool)0;
long long int var_6 = -3857098652620897650LL;
unsigned long long int var_8 = 6116807891795990199ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)84;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
