#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6136556745077680985LL;
int var_3 = -940555691;
long long int var_5 = 5100460920446041852LL;
unsigned char var_7 = (unsigned char)89;
long long int var_9 = -800623424164778177LL;
int zero = 0;
unsigned long long int var_17 = 14417614377251251814ULL;
unsigned long long int var_18 = 8245573480208376181ULL;
unsigned long long int var_19 = 15303444790047934631ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
