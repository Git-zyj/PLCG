#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12627119098816579629ULL;
long long int var_4 = 7836596218371559893LL;
unsigned short var_5 = (unsigned short)40870;
short var_7 = (short)25607;
int var_8 = -1014204771;
unsigned long long int var_10 = 4042348904906225235ULL;
int zero = 0;
signed char var_12 = (signed char)83;
unsigned long long int var_13 = 14416518336370094527ULL;
unsigned char var_14 = (unsigned char)190;
signed char var_15 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
