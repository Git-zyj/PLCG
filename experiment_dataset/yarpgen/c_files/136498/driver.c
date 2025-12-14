#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = -4853151331338475653LL;
int var_4 = -245644675;
short var_9 = (short)-10193;
unsigned long long int var_11 = 901556535706198222ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)38129;
_Bool var_13 = (_Bool)0;
long long int var_14 = 8995151185321848592LL;
void init() {
}

void checksum() {
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
