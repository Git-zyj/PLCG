#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-3;
signed char var_7 = (signed char)-14;
signed char var_9 = (signed char)56;
int zero = 0;
unsigned short var_19 = (unsigned short)61848;
unsigned long long int var_20 = 16879563890854786980ULL;
void init() {
}

void checksum() {
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
