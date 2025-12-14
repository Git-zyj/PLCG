#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)105;
signed char var_4 = (signed char)7;
unsigned long long int var_13 = 2299317943517355439ULL;
int zero = 0;
unsigned int var_17 = 3902611858U;
unsigned char var_18 = (unsigned char)240;
unsigned short var_19 = (unsigned short)32079;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
