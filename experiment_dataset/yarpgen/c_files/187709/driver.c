#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4287804976540230237LL;
short var_2 = (short)-27809;
long long int var_4 = -5095517761915720095LL;
unsigned short var_9 = (unsigned short)14506;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)781;
void init() {
}

void checksum() {
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
