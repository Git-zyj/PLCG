#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -967615324934400280LL;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)100;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)222;
unsigned long long int var_21 = 16530413982587245603ULL;
long long int var_22 = 2618383457812630148LL;
void init() {
}

void checksum() {
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
