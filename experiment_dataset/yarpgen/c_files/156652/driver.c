#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)169;
short var_8 = (short)27954;
_Bool var_9 = (_Bool)1;
long long int var_14 = -1269974217845560528LL;
int zero = 0;
long long int var_15 = 5695702151075435954LL;
signed char var_16 = (signed char)37;
short var_17 = (short)-24072;
unsigned char var_18 = (unsigned char)69;
unsigned long long int var_19 = 17142307550670169543ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
