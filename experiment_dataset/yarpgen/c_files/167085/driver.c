#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -397412522489216795LL;
int zero = 0;
unsigned long long int var_15 = 243512573992768555ULL;
unsigned long long int var_16 = 12126676927345313212ULL;
unsigned long long int var_17 = 15789541158037740203ULL;
unsigned char var_18 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
