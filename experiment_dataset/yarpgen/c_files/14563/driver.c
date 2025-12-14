#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1519601989U;
unsigned char var_2 = (unsigned char)56;
unsigned int var_4 = 1868161742U;
int var_5 = 1175349955;
int var_7 = 1831027426;
unsigned long long int var_8 = 15707301714323293073ULL;
int var_9 = -737986115;
short var_10 = (short)18323;
int zero = 0;
unsigned char var_11 = (unsigned char)235;
int var_12 = -15427461;
void init() {
}

void checksum() {
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
