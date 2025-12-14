#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18827;
short var_2 = (short)7487;
unsigned short var_11 = (unsigned short)58110;
unsigned long long int var_15 = 7906460346174786932ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)48935;
unsigned long long int var_21 = 16159128626102641669ULL;
unsigned int var_22 = 1848212972U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
