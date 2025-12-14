#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -2963489993333420577LL;
long long int var_13 = 5725344083501266177LL;
int zero = 0;
unsigned long long int var_19 = 10344773712819819305ULL;
unsigned char var_20 = (unsigned char)209;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
