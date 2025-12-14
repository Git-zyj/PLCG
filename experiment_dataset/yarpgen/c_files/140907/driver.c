#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10864979710952987793ULL;
short var_12 = (short)-28088;
unsigned long long int var_13 = 14967024970961167651ULL;
unsigned long long int var_14 = 6259862796673014801ULL;
int zero = 0;
unsigned int var_17 = 3426841299U;
unsigned short var_18 = (unsigned short)43847;
unsigned long long int var_19 = 10978781564599156101ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
