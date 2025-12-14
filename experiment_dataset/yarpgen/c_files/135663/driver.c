#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)55;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-4;
unsigned long long int var_14 = 13361995407998418981ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)92;
unsigned long long int var_17 = 11454355344799636255ULL;
unsigned long long int var_18 = 4887196618434240732ULL;
short var_19 = (short)-4439;
unsigned int var_20 = 3654285558U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
