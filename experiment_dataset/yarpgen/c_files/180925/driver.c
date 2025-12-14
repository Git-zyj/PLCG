#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15813970435775505508ULL;
signed char var_3 = (signed char)-51;
unsigned long long int var_5 = 10659363092365890073ULL;
int zero = 0;
short var_10 = (short)29140;
unsigned long long int var_11 = 17234756861465311686ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
