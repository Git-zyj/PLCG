#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)147;
unsigned char var_2 = (unsigned char)35;
unsigned char var_5 = (unsigned char)161;
unsigned int var_7 = 2460260005U;
unsigned int var_9 = 3318887243U;
int zero = 0;
unsigned short var_12 = (unsigned short)48268;
unsigned long long int var_13 = 2957978791331528902ULL;
long long int var_14 = 3196969229246048825LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
