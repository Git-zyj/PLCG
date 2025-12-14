#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1525673434;
unsigned char var_2 = (unsigned char)41;
unsigned short var_3 = (unsigned short)19716;
unsigned char var_5 = (unsigned char)18;
long long int var_7 = -2148707287361003241LL;
int zero = 0;
unsigned int var_10 = 169193969U;
long long int var_11 = -5112818439905434168LL;
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
