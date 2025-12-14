#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3381433794U;
long long int var_1 = 7707845896070818990LL;
unsigned int var_7 = 1880011726U;
unsigned int var_9 = 3185656822U;
long long int var_10 = 4558764058588478365LL;
int zero = 0;
unsigned char var_11 = (unsigned char)189;
signed char var_12 = (signed char)-118;
long long int var_13 = -1377517511328377835LL;
void init() {
}

void checksum() {
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
