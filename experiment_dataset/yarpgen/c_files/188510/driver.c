#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 99047923U;
unsigned int var_6 = 1050901685U;
int zero = 0;
unsigned long long int var_10 = 6244179746556716944ULL;
unsigned short var_11 = (unsigned short)9881;
unsigned long long int var_12 = 9873194582707112484ULL;
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
