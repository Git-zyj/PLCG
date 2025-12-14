#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)240;
long long int var_1 = -2602291238288550208LL;
unsigned long long int var_3 = 9015397768654984574ULL;
int var_5 = -1260936203;
int var_7 = 1056833603;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 16230011658604128062ULL;
int var_12 = -1057005240;
long long int var_13 = 4388060678346714526LL;
unsigned int var_14 = 431230793U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
