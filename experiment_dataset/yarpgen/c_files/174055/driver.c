#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-38;
unsigned long long int var_9 = 18334598473454790703ULL;
unsigned char var_11 = (unsigned char)140;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 4572284181374474666LL;
unsigned int var_14 = 569382502U;
void init() {
}

void checksum() {
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
