#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 2849677147252969399ULL;
unsigned char var_9 = (unsigned char)103;
unsigned char var_13 = (unsigned char)58;
long long int var_17 = 5636944117050443090LL;
int zero = 0;
unsigned char var_19 = (unsigned char)173;
unsigned long long int var_20 = 9148519701474314648ULL;
unsigned int var_21 = 3013338715U;
unsigned int var_22 = 1593273056U;
unsigned int var_23 = 2375420949U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
