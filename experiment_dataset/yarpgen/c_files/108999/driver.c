#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18928;
unsigned int var_1 = 3684060746U;
unsigned int var_3 = 3245458953U;
unsigned long long int var_5 = 11761249486151011194ULL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-279;
unsigned int var_10 = 722080387U;
int zero = 0;
int var_12 = -1050946975;
unsigned char var_13 = (unsigned char)220;
void init() {
}

void checksum() {
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
