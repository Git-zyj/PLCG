#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)242;
long long int var_3 = -3786294596246738245LL;
short var_6 = (short)-12773;
_Bool var_9 = (_Bool)1;
int var_12 = 518981947;
int zero = 0;
unsigned long long int var_15 = 16044517164651723298ULL;
short var_16 = (short)-9608;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
