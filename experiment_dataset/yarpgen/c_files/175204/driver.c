#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
unsigned int var_3 = 193073549U;
long long int var_8 = 6844268417062724140LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)1;
unsigned char var_15 = (unsigned char)126;
void init() {
}

void checksum() {
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
