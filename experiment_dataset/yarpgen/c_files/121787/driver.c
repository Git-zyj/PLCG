#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9172271143940806829ULL;
unsigned char var_6 = (unsigned char)137;
_Bool var_9 = (_Bool)1;
unsigned long long int var_13 = 13437235070840030802ULL;
int zero = 0;
int var_14 = -1175324938;
_Bool var_15 = (_Bool)0;
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
