#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
signed char var_1 = (signed char)14;
long long int var_5 = -2060471455903599046LL;
long long int var_7 = -5680726260320658268LL;
long long int var_8 = 308660032581921089LL;
signed char var_9 = (signed char)-62;
int zero = 0;
unsigned char var_10 = (unsigned char)42;
unsigned long long int var_11 = 437407926927533652ULL;
unsigned long long int var_12 = 5736204195861381235ULL;
unsigned short var_13 = (unsigned short)28566;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
