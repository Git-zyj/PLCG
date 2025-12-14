#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-29;
unsigned char var_6 = (unsigned char)26;
signed char var_8 = (signed char)-16;
signed char var_12 = (signed char)109;
signed char var_17 = (signed char)109;
long long int var_18 = 8543208264914755126LL;
int zero = 0;
long long int var_19 = 8373966947876419528LL;
short var_20 = (short)30759;
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
