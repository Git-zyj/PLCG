#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12771504075169134746ULL;
int var_6 = 696566855;
unsigned short var_9 = (unsigned short)50605;
unsigned int var_10 = 2417753068U;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 5971282705899743750ULL;
unsigned int var_16 = 989407492U;
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
