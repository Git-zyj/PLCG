#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3710628044U;
unsigned short var_8 = (unsigned short)34845;
int zero = 0;
long long int var_14 = -2443080571526811815LL;
unsigned long long int var_15 = 2888598711304684974ULL;
_Bool var_16 = (_Bool)1;
long long int var_17 = 8745093367146267344LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
