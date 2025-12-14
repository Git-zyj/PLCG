#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15456755074345335964ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_9 = (unsigned char)49;
int zero = 0;
unsigned int var_10 = 4029143015U;
unsigned short var_11 = (unsigned short)16307;
unsigned int var_12 = 87667481U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
