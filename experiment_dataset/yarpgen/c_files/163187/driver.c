#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8422730915834515474LL;
_Bool var_5 = (_Bool)0;
int zero = 0;
long long int var_10 = 5741257662588034921LL;
unsigned short var_11 = (unsigned short)61500;
long long int var_12 = -3399538467623509651LL;
unsigned char var_13 = (unsigned char)107;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
