#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6832;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)123;
int zero = 0;
long long int var_10 = 1865582223558052402LL;
unsigned long long int var_11 = 4289350243846830678ULL;
unsigned long long int var_12 = 15375222877181058683ULL;
short var_13 = (short)-2978;
long long int var_14 = -960380116557314760LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
