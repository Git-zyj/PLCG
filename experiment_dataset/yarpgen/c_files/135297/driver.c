#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_6 = 79253714996168500LL;
long long int var_7 = -1248670608001899958LL;
unsigned short var_9 = (unsigned short)42671;
unsigned int var_11 = 2335454006U;
int zero = 0;
signed char var_12 = (signed char)-109;
int var_13 = 1678111501;
void init() {
}

void checksum() {
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
