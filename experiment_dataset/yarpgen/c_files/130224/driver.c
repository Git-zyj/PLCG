#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1171455429;
unsigned long long int var_6 = 5699188716396657301ULL;
int var_7 = 991816955;
unsigned long long int var_10 = 13643931724724874445ULL;
int zero = 0;
int var_15 = 27452394;
signed char var_16 = (signed char)63;
unsigned int var_17 = 2643259143U;
short var_18 = (short)-28414;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
