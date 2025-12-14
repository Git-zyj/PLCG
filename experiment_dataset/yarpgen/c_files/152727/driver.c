#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1294099571;
signed char var_1 = (signed char)65;
unsigned long long int var_3 = 16568939896484506564ULL;
unsigned char var_4 = (unsigned char)147;
unsigned int var_5 = 3780886671U;
unsigned char var_6 = (unsigned char)228;
int zero = 0;
unsigned int var_11 = 2899498857U;
unsigned long long int var_12 = 7884197666155941069ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
