#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -476602130;
unsigned long long int var_4 = 5655159577209082645ULL;
unsigned char var_12 = (unsigned char)39;
int zero = 0;
unsigned long long int var_18 = 9500704718513595204ULL;
int var_19 = -1395535065;
long long int var_20 = 8431771715626926754LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
