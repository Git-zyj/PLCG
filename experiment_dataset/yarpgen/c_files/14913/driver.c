#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64786;
long long int var_1 = 8746539375031956928LL;
long long int var_3 = 5830925523010848223LL;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 3379144823U;
short var_11 = (short)-17939;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
