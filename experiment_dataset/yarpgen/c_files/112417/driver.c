#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 13738357978741947482ULL;
unsigned short var_9 = (unsigned short)11866;
int var_10 = 1300691872;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -8999197655887047974LL;
void init() {
}

void checksum() {
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
