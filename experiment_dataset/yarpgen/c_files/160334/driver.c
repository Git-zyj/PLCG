#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
int var_2 = 1725193942;
int var_3 = 1764409035;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
int var_8 = 588242484;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = -1232960071;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
