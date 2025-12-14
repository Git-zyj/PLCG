#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4084600737131699974ULL;
long long int var_4 = -5453826215170541056LL;
int var_7 = -1273572704;
unsigned long long int var_10 = 16466104459630985204ULL;
int zero = 0;
long long int var_11 = -4359495232964723997LL;
int var_12 = -691465929;
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
