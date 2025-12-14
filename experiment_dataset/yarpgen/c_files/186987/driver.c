#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 719335725U;
_Bool var_6 = (_Bool)1;
long long int var_9 = 1305274825844185093LL;
unsigned int var_10 = 816805241U;
int zero = 0;
int var_18 = -1504910512;
int var_19 = 2034830966;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
