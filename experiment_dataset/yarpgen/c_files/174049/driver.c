#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25160;
unsigned char var_6 = (unsigned char)143;
long long int var_8 = 715718793432390187LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-12;
int var_12 = 506391583;
long long int var_13 = -7468732869333691997LL;
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
