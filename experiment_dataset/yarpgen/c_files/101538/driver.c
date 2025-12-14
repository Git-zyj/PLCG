#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2662;
unsigned int var_2 = 267000951U;
short var_4 = (short)-27536;
long long int var_6 = 8315890132448363643LL;
short var_11 = (short)6371;
int zero = 0;
long long int var_14 = 7226543577835950709LL;
short var_15 = (short)26205;
long long int var_16 = 8884689738303320160LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
