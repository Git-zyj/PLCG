#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1077649284601073849LL;
signed char var_2 = (signed char)75;
signed char var_7 = (signed char)5;
unsigned short var_10 = (unsigned short)39405;
long long int var_11 = 4723963940437069376LL;
int zero = 0;
unsigned int var_12 = 4162452819U;
long long int var_13 = -8257195780223672808LL;
unsigned long long int var_14 = 184921256993319258ULL;
void init() {
}

void checksum() {
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
