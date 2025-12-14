#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3186406451U;
unsigned long long int var_2 = 676999210618513387ULL;
unsigned long long int var_7 = 5576221513340611827ULL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)1;
int zero = 0;
signed char var_11 = (signed char)-50;
short var_12 = (short)31970;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
