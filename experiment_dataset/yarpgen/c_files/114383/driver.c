#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-63;
unsigned int var_8 = 3499874503U;
unsigned char var_14 = (unsigned char)117;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 17482151178126716989ULL;
int var_18 = -206366237;
unsigned char var_19 = (unsigned char)241;
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
