#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1584427624;
long long int var_3 = 8865589723000202459LL;
unsigned int var_8 = 2828756225U;
unsigned char var_9 = (unsigned char)104;
unsigned short var_10 = (unsigned short)44428;
signed char var_11 = (signed char)120;
long long int var_13 = 8469067474928345840LL;
unsigned short var_15 = (unsigned short)8337;
int zero = 0;
signed char var_17 = (signed char)113;
signed char var_18 = (signed char)33;
unsigned long long int var_19 = 11282585693330833547ULL;
int var_20 = -616671971;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
