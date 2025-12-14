#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13004379166126264194ULL;
signed char var_9 = (signed char)-42;
unsigned short var_11 = (unsigned short)27282;
int zero = 0;
unsigned long long int var_14 = 16356361142154338721ULL;
unsigned int var_15 = 685122531U;
unsigned long long int var_16 = 14703391301840303037ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
