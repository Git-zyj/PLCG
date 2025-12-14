#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -418184221;
signed char var_7 = (signed char)40;
signed char var_8 = (signed char)90;
unsigned long long int var_10 = 4977875584480904347ULL;
int zero = 0;
int var_11 = 1780018734;
int var_12 = -1672916202;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
