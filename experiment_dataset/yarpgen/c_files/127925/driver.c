#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 772007998660160573LL;
int var_12 = 2097779651;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
long long int var_18 = -1111553972843655801LL;
int zero = 0;
short var_19 = (short)25078;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)30457;
unsigned short var_22 = (unsigned short)47310;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
