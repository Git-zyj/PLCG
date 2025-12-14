#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4543522642084217909LL;
unsigned int var_6 = 3863062671U;
unsigned long long int var_7 = 945137702225627603ULL;
unsigned char var_10 = (unsigned char)161;
unsigned char var_14 = (unsigned char)214;
int zero = 0;
int var_18 = 1718288426;
unsigned int var_19 = 117762686U;
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
