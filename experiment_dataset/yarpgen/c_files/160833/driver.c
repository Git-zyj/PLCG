#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8788676908403985821LL;
unsigned long long int var_5 = 4516310226413706740ULL;
int var_9 = -1936686197;
int zero = 0;
long long int var_10 = 8021652062019763362LL;
int var_11 = -669057970;
unsigned short var_12 = (unsigned short)60758;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
