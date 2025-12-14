#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4177342730107433808LL;
long long int var_1 = -1740151776464369474LL;
int var_4 = -210077617;
unsigned int var_9 = 3325848491U;
unsigned char var_11 = (unsigned char)117;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -1270647277163009004LL;
unsigned char var_14 = (unsigned char)136;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
