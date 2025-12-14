#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6220607859245261729ULL;
long long int var_16 = -4181013140013291988LL;
int var_18 = 1536988128;
int zero = 0;
signed char var_19 = (signed char)53;
int var_20 = -751972757;
signed char var_21 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
