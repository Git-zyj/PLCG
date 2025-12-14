#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17384314376942274022ULL;
unsigned int var_7 = 2830494804U;
unsigned int var_8 = 1484278176U;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)77;
unsigned char var_11 = (unsigned char)168;
signed char var_12 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
