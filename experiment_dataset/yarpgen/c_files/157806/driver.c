#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-14;
unsigned int var_3 = 4096058655U;
short var_7 = (short)-16770;
long long int var_10 = 4438155952958092029LL;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1122047878U;
int zero = 0;
unsigned char var_15 = (unsigned char)190;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
