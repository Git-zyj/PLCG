#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)93;
long long int var_7 = -2025658605064656830LL;
int var_9 = -1695212862;
signed char var_13 = (signed char)-58;
int zero = 0;
unsigned long long int var_15 = 12351094311180729349ULL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3991211970U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
