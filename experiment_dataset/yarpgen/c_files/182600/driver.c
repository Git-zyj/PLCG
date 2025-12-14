#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 11904136761917794429ULL;
unsigned short var_5 = (unsigned short)33008;
long long int var_7 = -3989703144422576032LL;
long long int var_9 = 655906892058578309LL;
int zero = 0;
unsigned short var_13 = (unsigned short)47472;
int var_14 = 2081794083;
void init() {
}

void checksum() {
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
