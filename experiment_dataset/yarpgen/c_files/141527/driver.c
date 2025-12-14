#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 2121549856;
unsigned long long int var_6 = 12534776849794491454ULL;
long long int var_13 = 2425536500828072118LL;
unsigned int var_16 = 1930906752U;
int zero = 0;
unsigned long long int var_20 = 10017123164117339971ULL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2293644064U;
unsigned char var_23 = (unsigned char)237;
short var_24 = (short)30028;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
