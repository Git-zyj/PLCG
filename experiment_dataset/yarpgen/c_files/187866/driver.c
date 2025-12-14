#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)81;
unsigned int var_3 = 2486565282U;
signed char var_5 = (signed char)26;
long long int var_9 = -4762161656202722715LL;
int var_14 = -1290953103;
unsigned int var_15 = 2851554574U;
int zero = 0;
short var_17 = (short)7887;
long long int var_18 = -2111743291458632100LL;
int var_19 = -2128215749;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
