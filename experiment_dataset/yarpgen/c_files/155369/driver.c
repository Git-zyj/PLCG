#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-38;
unsigned long long int var_1 = 8966996040407440928ULL;
unsigned short var_8 = (unsigned short)8026;
unsigned long long int var_9 = 10377875600550450654ULL;
int zero = 0;
long long int var_10 = -7712646193777470349LL;
short var_11 = (short)21396;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
