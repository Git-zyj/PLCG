#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-102;
signed char var_11 = (signed char)94;
int zero = 0;
unsigned long long int var_18 = 4083261228236792894ULL;
long long int var_19 = 1406986377997941822LL;
unsigned char var_20 = (unsigned char)210;
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
