#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17054981628066771868ULL;
unsigned long long int var_5 = 12050291235945856592ULL;
int var_6 = 1909868702;
unsigned char var_8 = (unsigned char)46;
_Bool var_9 = (_Bool)1;
long long int var_12 = 4584045439603313275LL;
unsigned int var_14 = 1619053072U;
int zero = 0;
long long int var_15 = -7187039412885469352LL;
unsigned int var_16 = 3248930879U;
int var_17 = -796420194;
short var_18 = (short)20491;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
