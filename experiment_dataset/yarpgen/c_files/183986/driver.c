#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 374816379;
int var_3 = 1769492924;
signed char var_4 = (signed char)98;
int var_8 = 1246065054;
int var_11 = -2063170348;
int var_13 = 2142724914;
signed char var_16 = (signed char)80;
int zero = 0;
int var_18 = -512878448;
int var_19 = -1340496087;
unsigned int var_20 = 1177577162U;
int var_21 = 266017523;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
