#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14156835195938524549ULL;
unsigned int var_5 = 818234788U;
signed char var_8 = (signed char)111;
int zero = 0;
unsigned long long int var_17 = 5238351070995176054ULL;
unsigned short var_18 = (unsigned short)23290;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
