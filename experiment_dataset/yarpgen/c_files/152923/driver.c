#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2762075294895092960ULL;
short var_4 = (short)-24798;
unsigned char var_5 = (unsigned char)138;
unsigned long long int var_7 = 4902673824311589188ULL;
unsigned int var_11 = 3740323744U;
int zero = 0;
short var_12 = (short)-29803;
short var_13 = (short)5182;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
