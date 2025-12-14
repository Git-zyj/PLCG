#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3899819593U;
signed char var_6 = (signed char)-68;
int var_7 = 1288065856;
int var_9 = 604424065;
unsigned long long int var_10 = 13639047503098376290ULL;
int var_13 = -1033349382;
int zero = 0;
short var_19 = (short)24760;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 7494391564515891813ULL;
unsigned long long int var_22 = 6777600320359674746ULL;
signed char var_23 = (signed char)102;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
