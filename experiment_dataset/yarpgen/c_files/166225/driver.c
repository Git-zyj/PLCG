#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 4909022539330896406ULL;
signed char var_7 = (signed char)-46;
unsigned int var_9 = 717905912U;
int zero = 0;
signed char var_11 = (signed char)-44;
long long int var_12 = 6028310601693841893LL;
long long int var_13 = -4117732754639829708LL;
short var_14 = (short)-25147;
unsigned int var_15 = 1694629623U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
