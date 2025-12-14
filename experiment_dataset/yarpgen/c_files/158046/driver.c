#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)57;
unsigned long long int var_4 = 200130708172768407ULL;
signed char var_10 = (signed char)48;
int zero = 0;
unsigned long long int var_16 = 13750123905317615691ULL;
unsigned long long int var_17 = 18022083951336872606ULL;
signed char var_18 = (signed char)-118;
void init() {
}

void checksum() {
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
