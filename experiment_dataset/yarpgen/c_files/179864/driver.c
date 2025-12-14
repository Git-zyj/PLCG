#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1250557993U;
unsigned short var_2 = (unsigned short)32232;
_Bool var_3 = (_Bool)1;
long long int var_8 = -2869228978218481494LL;
int var_16 = 1598184766;
int zero = 0;
unsigned short var_20 = (unsigned short)31784;
long long int var_21 = -7815673970300016908LL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
