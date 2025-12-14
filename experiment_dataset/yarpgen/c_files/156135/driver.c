#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14150698764218207805ULL;
unsigned long long int var_6 = 16859102772948258953ULL;
unsigned short var_7 = (unsigned short)53436;
int zero = 0;
long long int var_11 = 1313643220530931545LL;
long long int var_12 = -9164876561444843163LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
