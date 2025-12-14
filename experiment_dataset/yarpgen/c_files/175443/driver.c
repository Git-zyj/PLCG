#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7629963560404468220LL;
unsigned short var_1 = (unsigned short)35674;
unsigned long long int var_2 = 6495680788737549253ULL;
unsigned int var_3 = 3308395489U;
int var_9 = -1873238251;
int zero = 0;
int var_13 = -108610400;
unsigned char var_14 = (unsigned char)24;
void init() {
}

void checksum() {
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
