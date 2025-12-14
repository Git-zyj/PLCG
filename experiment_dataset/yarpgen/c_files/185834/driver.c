#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_3 = -8824084945771260149LL;
long long int var_9 = -2497567589317727239LL;
short var_10 = (short)11806;
short var_12 = (short)22966;
int zero = 0;
unsigned short var_18 = (unsigned short)65421;
long long int var_19 = 4789944998391269181LL;
void init() {
}

void checksum() {
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
