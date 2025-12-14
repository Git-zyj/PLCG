#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)126;
unsigned int var_5 = 1148360882U;
long long int var_11 = 9094502416752641963LL;
unsigned long long int var_13 = 9127905592219642076ULL;
int zero = 0;
int var_18 = 717979487;
int var_19 = -1371695763;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
