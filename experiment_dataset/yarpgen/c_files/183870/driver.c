#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 650759630U;
unsigned short var_6 = (unsigned short)37377;
int zero = 0;
unsigned long long int var_10 = 17554052593129998523ULL;
unsigned long long int var_11 = 9377076291662139259ULL;
int var_12 = -1134193777;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
