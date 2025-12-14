#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25109;
int var_2 = -512673090;
_Bool var_5 = (_Bool)1;
unsigned char var_9 = (unsigned char)13;
unsigned long long int var_12 = 12309366017837879646ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)49;
long long int var_14 = -6490386205214997403LL;
void init() {
}

void checksum() {
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
