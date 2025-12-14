#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5398111214110258793LL;
long long int var_3 = -6710217696631100241LL;
unsigned char var_6 = (unsigned char)57;
short var_7 = (short)-9467;
signed char var_8 = (signed char)-101;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -3166484001025015153LL;
short var_12 = (short)25852;
unsigned int var_13 = 1485932789U;
short var_14 = (short)-26446;
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
