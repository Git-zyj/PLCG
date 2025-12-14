#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -4111531633209536762LL;
unsigned char var_13 = (unsigned char)20;
int var_14 = -1145138466;
int var_16 = -110576629;
unsigned int var_17 = 799314175U;
int zero = 0;
short var_19 = (short)-9218;
signed char var_20 = (signed char)-2;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-38;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
