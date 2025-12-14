#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7868467899627631676LL;
unsigned int var_3 = 2862672694U;
signed char var_6 = (signed char)-100;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)1;
int zero = 0;
unsigned short var_10 = (unsigned short)43794;
unsigned long long int var_11 = 5967487987473156221ULL;
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
