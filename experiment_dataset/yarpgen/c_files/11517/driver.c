#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -5373785146131085416LL;
long long int var_9 = 4818409843584879211LL;
unsigned char var_10 = (unsigned char)103;
int var_11 = 49357278;
int zero = 0;
unsigned char var_13 = (unsigned char)69;
unsigned char var_14 = (unsigned char)171;
_Bool var_15 = (_Bool)1;
long long int var_16 = -1175415713870877545LL;
int var_17 = 1782852353;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
