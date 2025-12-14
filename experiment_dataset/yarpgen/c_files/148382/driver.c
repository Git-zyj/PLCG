#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2438;
long long int var_3 = -7284984145158259776LL;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)44986;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-76;
long long int var_12 = 8619855270436786409LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
