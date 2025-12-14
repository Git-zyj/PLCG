#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7433961339792371941LL;
long long int var_5 = -2112742606053647671LL;
long long int var_6 = 5594257477181823556LL;
unsigned long long int var_7 = 3481596668521101376ULL;
signed char var_8 = (signed char)77;
signed char var_9 = (signed char)74;
unsigned short var_10 = (unsigned short)39357;
int var_11 = 566349908;
unsigned long long int var_12 = 10699400866536669144ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)213;
signed char var_14 = (signed char)-84;
unsigned int var_15 = 2479421363U;
void init() {
}

void checksum() {
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
