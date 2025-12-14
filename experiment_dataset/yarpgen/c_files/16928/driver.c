#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -634784278;
unsigned short var_2 = (unsigned short)4521;
_Bool var_4 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)61035;
long long int var_14 = 6039789055577552302LL;
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
