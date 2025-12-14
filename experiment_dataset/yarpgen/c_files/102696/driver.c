#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 918348458U;
int var_4 = -110734030;
unsigned char var_7 = (unsigned char)117;
unsigned short var_9 = (unsigned short)48593;
unsigned long long int var_12 = 12026229036792612402ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)20412;
unsigned char var_18 = (unsigned char)228;
void init() {
}

void checksum() {
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
