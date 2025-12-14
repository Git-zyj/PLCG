#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1732142991;
long long int var_9 = -7706125119919038671LL;
int zero = 0;
long long int var_13 = -4866787905943873324LL;
unsigned long long int var_14 = 2895291887295566574ULL;
unsigned short var_15 = (unsigned short)25881;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
