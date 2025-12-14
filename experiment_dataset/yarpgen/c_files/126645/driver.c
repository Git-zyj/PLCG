#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_3 = 3655247206601651216LL;
unsigned short var_4 = (unsigned short)19686;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 2278770185538564022ULL;
short var_7 = (short)15288;
unsigned short var_9 = (unsigned short)19852;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_13 = -6576365155418802509LL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
