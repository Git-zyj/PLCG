#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2024817181;
unsigned char var_9 = (unsigned char)155;
signed char var_11 = (signed char)-120;
_Bool var_13 = (_Bool)1;
int var_14 = 1543112807;
unsigned char var_15 = (unsigned char)165;
int var_16 = -2049334539;
unsigned short var_18 = (unsigned short)25275;
int zero = 0;
unsigned char var_19 = (unsigned char)119;
unsigned long long int var_20 = 4960768524586519482ULL;
void init() {
}

void checksum() {
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
