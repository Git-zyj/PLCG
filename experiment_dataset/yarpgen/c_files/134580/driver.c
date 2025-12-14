#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_9 = (short)-21359;
long long int var_11 = -7788330308539655152LL;
long long int var_17 = -4474800904866666635LL;
int zero = 0;
unsigned int var_18 = 2781470615U;
unsigned short var_19 = (unsigned short)1088;
long long int var_20 = 4878857112231107208LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
