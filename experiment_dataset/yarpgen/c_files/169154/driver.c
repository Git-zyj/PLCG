#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 6842667949970613321LL;
unsigned long long int var_10 = 18007690915919555920ULL;
int zero = 0;
unsigned long long int var_17 = 12676166630388187976ULL;
unsigned long long int var_18 = 17782919198544271464ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
