#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1443194262;
long long int var_5 = 8193250822748958907LL;
int var_7 = -1398675988;
signed char var_8 = (signed char)-82;
unsigned long long int var_9 = 12339477206423358030ULL;
int zero = 0;
int var_10 = -2082800856;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
