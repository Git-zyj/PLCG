#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
unsigned int var_1 = 1392200361U;
_Bool var_14 = (_Bool)1;
long long int var_16 = 8959344523020647780LL;
int zero = 0;
unsigned long long int var_18 = 15841192424213995349ULL;
signed char var_19 = (signed char)28;
long long int var_20 = 8235284619356764031LL;
int var_21 = 2034140272;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
