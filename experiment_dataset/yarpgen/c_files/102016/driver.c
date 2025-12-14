#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 283804768;
unsigned int var_7 = 607555459U;
signed char var_9 = (signed char)126;
unsigned int var_10 = 3416409278U;
signed char var_15 = (signed char)20;
unsigned int var_19 = 465545024U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3144470772U;
int var_22 = 982719041;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
