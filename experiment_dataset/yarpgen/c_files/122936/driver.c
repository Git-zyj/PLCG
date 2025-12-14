#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3149119107521956603ULL;
unsigned long long int var_2 = 415560772571889926ULL;
unsigned long long int var_5 = 9048212793561788303ULL;
unsigned long long int var_9 = 17590390501611120865ULL;
int zero = 0;
unsigned long long int var_12 = 9803851755054279644ULL;
unsigned long long int var_13 = 5064433228965510337ULL;
unsigned long long int var_14 = 9855175976919566440ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
