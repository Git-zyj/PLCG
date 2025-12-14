#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3077244908U;
short var_1 = (short)-31993;
unsigned short var_5 = (unsigned short)2248;
short var_6 = (short)28682;
unsigned short var_9 = (unsigned short)14879;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 10349859195841681351ULL;
unsigned short var_14 = (unsigned short)46416;
long long int var_15 = 492478480454685247LL;
int zero = 0;
short var_17 = (short)24483;
signed char var_18 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
