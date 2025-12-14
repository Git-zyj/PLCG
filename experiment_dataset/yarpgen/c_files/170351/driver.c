#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-24281;
unsigned long long int var_12 = 13389894577370436563ULL;
int zero = 0;
signed char var_17 = (signed char)-57;
unsigned char var_18 = (unsigned char)55;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 109386658U;
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
