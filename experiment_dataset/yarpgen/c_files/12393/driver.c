#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)183;
long long int var_7 = -8851690981240677654LL;
signed char var_9 = (signed char)53;
int zero = 0;
unsigned char var_11 = (unsigned char)160;
signed char var_12 = (signed char)-10;
unsigned char var_13 = (unsigned char)13;
long long int var_14 = -5826664841226624816LL;
unsigned int var_15 = 3350079899U;
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
