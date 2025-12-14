#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13275116702339536390ULL;
long long int var_7 = -2400923727962188075LL;
unsigned char var_11 = (unsigned char)223;
short var_12 = (short)7886;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-12;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
