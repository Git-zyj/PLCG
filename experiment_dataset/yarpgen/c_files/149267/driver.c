#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4941312740828612348LL;
long long int var_2 = -4021552345195808650LL;
int var_3 = -1831318246;
int var_4 = -1412987227;
unsigned long long int var_8 = 10467478628728325863ULL;
int zero = 0;
long long int var_15 = -5884250364932402649LL;
unsigned long long int var_16 = 12017260700523910717ULL;
signed char var_17 = (signed char)-57;
unsigned long long int var_18 = 6806375018058661427ULL;
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
