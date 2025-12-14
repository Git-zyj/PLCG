#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-103;
signed char var_10 = (signed char)-42;
int var_11 = 1379526204;
_Bool var_12 = (_Bool)0;
int var_13 = -1135068364;
int zero = 0;
short var_20 = (short)-29669;
long long int var_21 = -4488663699071075960LL;
unsigned long long int var_22 = 931081789389415009ULL;
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
