#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 662558695U;
unsigned short var_2 = (unsigned short)39591;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 4034497050U;
unsigned int var_11 = 2877488377U;
short var_12 = (short)5902;
short var_14 = (short)-10230;
int zero = 0;
long long int var_16 = -401795095182878428LL;
int var_17 = -1837533357;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
