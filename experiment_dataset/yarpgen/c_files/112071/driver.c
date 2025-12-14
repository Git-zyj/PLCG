#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)57599;
signed char var_8 = (signed char)23;
signed char var_9 = (signed char)103;
signed char var_11 = (signed char)-57;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 5115373890490893300ULL;
void init() {
}

void checksum() {
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
