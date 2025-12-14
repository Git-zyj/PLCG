#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2688276950976524560LL;
unsigned int var_5 = 1108782624U;
unsigned int var_8 = 2614551863U;
unsigned int var_9 = 3044808204U;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 1909162990U;
unsigned char var_13 = (unsigned char)103;
int var_14 = -2067146962;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
