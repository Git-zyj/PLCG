#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8883492816695644626LL;
long long int var_1 = 7905872622711973035LL;
long long int var_2 = -8589460932991518269LL;
long long int var_5 = -3189130243837267283LL;
long long int var_6 = 2040028904305002442LL;
long long int var_7 = -7629465500889668489LL;
long long int var_11 = -8156078503019140938LL;
long long int var_12 = 7118219843763923805LL;
long long int var_13 = 3943667627004129293LL;
int zero = 0;
long long int var_14 = -1179748584441852153LL;
long long int var_15 = -3314576798448133559LL;
long long int var_16 = -8688952317470448073LL;
long long int var_17 = -3234754330845259425LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
