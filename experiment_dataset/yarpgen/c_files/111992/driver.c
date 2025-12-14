#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4805511318249261964LL;
unsigned int var_6 = 1799928957U;
int zero = 0;
unsigned short var_16 = (unsigned short)13233;
unsigned char var_17 = (unsigned char)63;
long long int var_18 = 493355559309695641LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
