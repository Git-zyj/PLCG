#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-30;
unsigned long long int var_3 = 8037261417421906147ULL;
signed char var_4 = (signed char)-80;
unsigned char var_5 = (unsigned char)162;
unsigned char var_9 = (unsigned char)161;
unsigned int var_11 = 251729062U;
unsigned long long int var_14 = 1323061921530494219ULL;
unsigned int var_15 = 390113659U;
unsigned long long int var_16 = 9540385344444222406ULL;
int zero = 0;
int var_20 = -1965692573;
unsigned int var_21 = 2779590346U;
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
