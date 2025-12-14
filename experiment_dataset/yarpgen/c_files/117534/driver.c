#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4961087548690414278LL;
long long int var_1 = 326622134455772200LL;
unsigned int var_4 = 572649321U;
unsigned long long int var_11 = 7949085197493775432ULL;
unsigned long long int var_15 = 10313090355740872104ULL;
signed char var_16 = (signed char)84;
int zero = 0;
signed char var_18 = (signed char)28;
unsigned long long int var_19 = 9010300148757554034ULL;
signed char var_20 = (signed char)-106;
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
