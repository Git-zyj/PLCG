#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_9 = 4710561056176166555LL;
long long int var_11 = 3368499614619023087LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)142;
short var_16 = (short)-30591;
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
