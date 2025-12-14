#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 149928589U;
unsigned char var_6 = (unsigned char)90;
int zero = 0;
long long int var_18 = -6158836810150886185LL;
unsigned char var_19 = (unsigned char)89;
unsigned int var_20 = 359281569U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
