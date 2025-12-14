#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 7631996941398399944ULL;
unsigned int var_4 = 4287304256U;
unsigned int var_6 = 3220278863U;
int var_9 = 1769422314;
unsigned long long int var_13 = 3160340986089034480ULL;
int zero = 0;
signed char var_16 = (signed char)-39;
unsigned int var_17 = 1521828073U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
