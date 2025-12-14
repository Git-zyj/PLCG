#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6506820648919876302LL;
long long int var_10 = -5086767317270298696LL;
short var_16 = (short)16803;
int var_18 = 1848163856;
int zero = 0;
unsigned char var_20 = (unsigned char)51;
_Bool var_21 = (_Bool)0;
int var_22 = -1214531053;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
