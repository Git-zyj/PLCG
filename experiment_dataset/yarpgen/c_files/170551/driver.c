#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13398032042960030391ULL;
signed char var_6 = (signed char)2;
int var_9 = -469020328;
int zero = 0;
unsigned char var_10 = (unsigned char)220;
signed char var_11 = (signed char)65;
signed char var_12 = (signed char)121;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
