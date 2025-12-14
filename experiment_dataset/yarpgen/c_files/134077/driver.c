#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1177002206U;
signed char var_7 = (signed char)-56;
unsigned long long int var_10 = 5135565358148261744ULL;
int zero = 0;
long long int var_13 = 4760833049350439376LL;
int var_14 = 1179879847;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
