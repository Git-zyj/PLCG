#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8399171124576193134ULL;
short var_7 = (short)-8975;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)108;
int var_10 = 1628832480;
int zero = 0;
unsigned int var_11 = 2435035261U;
_Bool var_12 = (_Bool)1;
long long int var_13 = -6629273062340565963LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
