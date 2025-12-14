#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 637114528919630922ULL;
unsigned short var_15 = (unsigned short)17459;
unsigned long long int var_19 = 4751839835883351560ULL;
int zero = 0;
long long int var_20 = -1340657018408778003LL;
signed char var_21 = (signed char)26;
void init() {
}

void checksum() {
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
