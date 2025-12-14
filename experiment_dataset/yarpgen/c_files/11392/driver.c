#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6939;
long long int var_2 = 7572419371292246314LL;
unsigned long long int var_10 = 9809012078559794782ULL;
unsigned long long int var_13 = 5393923052735527056ULL;
unsigned long long int var_14 = 5782523482157632731ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_18 = -662297021;
unsigned char var_19 = (unsigned char)118;
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
