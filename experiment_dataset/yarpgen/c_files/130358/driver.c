#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)92;
unsigned long long int var_9 = 13808811856179866975ULL;
int zero = 0;
unsigned long long int var_20 = 15033799460966662631ULL;
signed char var_21 = (signed char)99;
unsigned char var_22 = (unsigned char)90;
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
