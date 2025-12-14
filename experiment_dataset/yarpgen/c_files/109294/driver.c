#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-28825;
unsigned long long int var_2 = 15994329754342379455ULL;
unsigned int var_3 = 2475661047U;
unsigned long long int var_4 = 311033659574600348ULL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
short var_9 = (short)-19224;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)52551;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 31969969908092789ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
