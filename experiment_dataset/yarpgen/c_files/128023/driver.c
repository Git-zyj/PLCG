#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 825509089;
signed char var_4 = (signed char)-75;
short var_7 = (short)-13736;
unsigned int var_12 = 3159377554U;
long long int var_14 = -6684248342107028001LL;
int zero = 0;
unsigned int var_18 = 4088959648U;
long long int var_19 = 1186878778496603445LL;
unsigned long long int var_20 = 628454119646834767ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
