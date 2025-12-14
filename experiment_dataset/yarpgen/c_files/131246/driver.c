#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1211940795U;
_Bool var_6 = (_Bool)1;
unsigned short var_10 = (unsigned short)801;
unsigned int var_12 = 1096243471U;
unsigned int var_13 = 3254585302U;
long long int var_15 = -4616679109815294450LL;
int var_18 = 1221979884;
int zero = 0;
unsigned short var_20 = (unsigned short)32523;
long long int var_21 = 3551068378201738209LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
