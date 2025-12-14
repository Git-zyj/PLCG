#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3164823757284318267ULL;
unsigned long long int var_6 = 17498680348365125460ULL;
short var_7 = (short)10183;
unsigned long long int var_12 = 169875522281466942ULL;
short var_18 = (short)1677;
int zero = 0;
short var_20 = (short)11660;
unsigned long long int var_21 = 2792468134947040332ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
