#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1827080103U;
int var_2 = -384485624;
long long int var_4 = -6226655681705923677LL;
signed char var_11 = (signed char)-14;
int zero = 0;
signed char var_12 = (signed char)-38;
signed char var_13 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
