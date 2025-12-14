#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)16176;
short var_6 = (short)9092;
unsigned long long int var_7 = 7043251084348654487ULL;
int var_9 = 996481581;
unsigned long long int var_10 = 11258061958936351640ULL;
int zero = 0;
short var_11 = (short)30511;
short var_12 = (short)23858;
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
