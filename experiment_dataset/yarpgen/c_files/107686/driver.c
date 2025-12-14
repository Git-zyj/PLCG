#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15307632115440876982ULL;
long long int var_5 = -5327085660336726815LL;
short var_13 = (short)29914;
int zero = 0;
unsigned long long int var_17 = 6078164176969626703ULL;
long long int var_18 = 7909378961030870056LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
