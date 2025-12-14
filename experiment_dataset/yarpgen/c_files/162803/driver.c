#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
unsigned int var_1 = 3254900145U;
unsigned char var_6 = (unsigned char)55;
unsigned long long int var_8 = 3363435635543949574ULL;
unsigned char var_9 = (unsigned char)192;
long long int var_13 = -8170524698533609315LL;
int zero = 0;
unsigned long long int var_15 = 12231581725178760233ULL;
long long int var_16 = -5557231540424672031LL;
unsigned char var_17 = (unsigned char)35;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
