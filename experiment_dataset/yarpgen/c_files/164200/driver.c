#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
short var_1 = (short)1916;
short var_3 = (short)8580;
unsigned long long int var_5 = 5559452607370998682ULL;
unsigned long long int var_8 = 2583279978731715422ULL;
int zero = 0;
short var_10 = (short)29420;
_Bool var_11 = (_Bool)1;
short var_12 = (short)15759;
unsigned char var_13 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
