#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-102;
unsigned short var_15 = (unsigned short)8303;
unsigned char var_16 = (unsigned char)170;
int zero = 0;
long long int var_19 = -2963112551095774638LL;
signed char var_20 = (signed char)-68;
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
