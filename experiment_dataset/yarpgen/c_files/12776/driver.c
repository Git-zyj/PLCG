#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1348484895;
unsigned long long int var_2 = 17219301129418699053ULL;
int var_3 = 707318711;
int var_4 = 107681406;
int var_9 = -1819374506;
int zero = 0;
unsigned long long int var_14 = 3556316853131590296ULL;
int var_15 = -1914047155;
unsigned long long int var_16 = 10434016098035130430ULL;
void init() {
}

void checksum() {
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
