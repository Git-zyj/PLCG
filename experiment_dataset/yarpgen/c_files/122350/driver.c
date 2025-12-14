#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 315287104U;
unsigned int var_8 = 2517255689U;
short var_9 = (short)27729;
int zero = 0;
long long int var_10 = 3856029145603182946LL;
long long int var_11 = 8979161491671113951LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
