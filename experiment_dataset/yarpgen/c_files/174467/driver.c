#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_5 = (unsigned char)212;
int var_6 = -36272771;
unsigned char var_9 = (unsigned char)177;
long long int var_12 = 5275899379570189781LL;
int var_13 = -1904432918;
int zero = 0;
signed char var_14 = (signed char)-63;
int var_15 = 819019836;
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
