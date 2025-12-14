#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -3342484196488747975LL;
unsigned short var_13 = (unsigned short)25640;
int zero = 0;
unsigned long long int var_18 = 7998900322939006529ULL;
unsigned long long int var_19 = 10682066174904350392ULL;
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
