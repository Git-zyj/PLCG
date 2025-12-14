#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1256843657500869659LL;
unsigned char var_3 = (unsigned char)113;
unsigned char var_6 = (unsigned char)128;
long long int var_9 = 6279051889712881591LL;
unsigned char var_11 = (unsigned char)222;
unsigned char var_12 = (unsigned char)120;
int zero = 0;
long long int var_13 = -2573163544717584664LL;
unsigned char var_14 = (unsigned char)153;
long long int var_15 = -7650565363425272765LL;
long long int var_16 = 3983383771501066223LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
