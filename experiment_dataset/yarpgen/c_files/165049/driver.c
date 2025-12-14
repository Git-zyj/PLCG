#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)108;
int var_6 = 987863656;
unsigned long long int var_15 = 6164060794958666959ULL;
int zero = 0;
long long int var_16 = 8124021275536157515LL;
unsigned char var_17 = (unsigned char)191;
int var_18 = -686512886;
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
