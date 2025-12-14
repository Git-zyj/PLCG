#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-8048;
long long int var_3 = 537752017841440814LL;
short var_7 = (short)-10259;
int zero = 0;
unsigned long long int var_12 = 4041203698223871419ULL;
unsigned char var_13 = (unsigned char)19;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-12;
long long int var_16 = 6158222102461845796LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
