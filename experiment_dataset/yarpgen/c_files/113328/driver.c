#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)6;
unsigned char var_2 = (unsigned char)14;
unsigned long long int var_10 = 12081720472965768637ULL;
int var_11 = -430305942;
int var_14 = 804397322;
int zero = 0;
signed char var_16 = (signed char)-39;
int var_17 = -2062132012;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
