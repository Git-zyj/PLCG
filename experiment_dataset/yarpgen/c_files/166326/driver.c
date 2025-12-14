#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)93;
unsigned long long int var_8 = 15998820557664578555ULL;
long long int var_9 = 255987766180287881LL;
long long int var_10 = 4640170452795733838LL;
int var_13 = -399459287;
signed char var_14 = (signed char)124;
int zero = 0;
unsigned int var_16 = 77153122U;
int var_17 = -1319500551;
int var_18 = -1787973093;
void init() {
}

void checksum() {
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
