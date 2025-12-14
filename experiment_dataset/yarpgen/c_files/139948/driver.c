#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2491676709U;
signed char var_8 = (signed char)11;
unsigned char var_11 = (unsigned char)186;
int var_15 = -1475881633;
int var_17 = 1837980780;
int zero = 0;
unsigned int var_18 = 614686039U;
int var_19 = -1695465621;
signed char var_20 = (signed char)-70;
unsigned int var_21 = 1246422387U;
long long int var_22 = 5078573805421867969LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
