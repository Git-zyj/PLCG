#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 471226667581859209ULL;
unsigned long long int var_5 = 5760461745634537911ULL;
int var_7 = -36852018;
unsigned long long int var_8 = 14978806105817254063ULL;
long long int var_9 = -9170030335707281714LL;
unsigned long long int var_10 = 761098686107109867ULL;
int zero = 0;
long long int var_11 = -6696523539133268267LL;
unsigned int var_12 = 3679795257U;
unsigned long long int var_13 = 8729640857503615521ULL;
int var_14 = -1151835933;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
