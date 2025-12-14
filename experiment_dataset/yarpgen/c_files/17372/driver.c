#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -8958410720736354636LL;
unsigned int var_15 = 3406913365U;
int var_17 = 795688354;
int zero = 0;
signed char var_18 = (signed char)-54;
long long int var_19 = -1382124027877820519LL;
long long int var_20 = -7018563163156772009LL;
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
