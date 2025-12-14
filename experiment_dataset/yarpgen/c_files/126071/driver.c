#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -551092217;
int var_9 = -1196447112;
unsigned short var_10 = (unsigned short)27764;
unsigned int var_15 = 3556645513U;
int zero = 0;
unsigned int var_16 = 1118830016U;
unsigned long long int var_17 = 1286657260774473848ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
