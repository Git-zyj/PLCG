#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -149402929954799671LL;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)29584;
unsigned short var_7 = (unsigned short)55988;
unsigned short var_9 = (unsigned short)47368;
unsigned short var_12 = (unsigned short)38457;
unsigned short var_14 = (unsigned short)31988;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
long long int var_19 = -3827034456704591118LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
