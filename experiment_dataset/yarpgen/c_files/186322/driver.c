#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1268314597;
unsigned long long int var_6 = 8400342375830729253ULL;
short var_15 = (short)3823;
int zero = 0;
short var_18 = (short)14477;
int var_19 = 1331225029;
unsigned long long int var_20 = 3194671395530322621ULL;
short var_21 = (short)22261;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
