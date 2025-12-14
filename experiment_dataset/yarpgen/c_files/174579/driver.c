#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14921159309420329969ULL;
unsigned long long int var_1 = 6478298763322342074ULL;
int var_6 = 1028592604;
unsigned int var_7 = 2162520288U;
int var_9 = -1466306109;
int var_10 = 33998155;
int var_11 = 1091207009;
unsigned char var_12 = (unsigned char)209;
int var_13 = 1834089850;
int zero = 0;
unsigned long long int var_20 = 4967333867349201574ULL;
long long int var_21 = 6884256924502915489LL;
long long int var_22 = 2998653547762057997LL;
unsigned char var_23 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
