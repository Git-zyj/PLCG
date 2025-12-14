#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_13 = 5716872489780742142ULL;
int zero = 0;
signed char var_17 = (signed char)-37;
unsigned short var_18 = (unsigned short)27518;
unsigned char var_19 = (unsigned char)67;
unsigned long long int var_20 = 10461557735550106328ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
