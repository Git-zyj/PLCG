#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)63;
unsigned long long int var_6 = 6462546745275131192ULL;
int var_9 = 534020529;
unsigned char var_13 = (unsigned char)216;
signed char var_14 = (signed char)-119;
int zero = 0;
signed char var_18 = (signed char)-1;
int var_19 = -2099940401;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
