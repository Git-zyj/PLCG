#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)1340;
long long int var_6 = -6188924109948073687LL;
unsigned char var_7 = (unsigned char)57;
unsigned long long int var_8 = 3785135047370813522ULL;
signed char var_9 = (signed char)127;
int var_11 = -1173672062;
int zero = 0;
unsigned int var_13 = 1322313933U;
signed char var_14 = (signed char)71;
void init() {
}

void checksum() {
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
