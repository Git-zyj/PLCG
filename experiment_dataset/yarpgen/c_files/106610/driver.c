#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8745581914085768217LL;
long long int var_2 = -4448754340976687222LL;
int var_7 = -757713137;
long long int var_9 = -4461723880120421163LL;
int zero = 0;
long long int var_10 = -5347880395993899174LL;
unsigned char var_11 = (unsigned char)185;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
