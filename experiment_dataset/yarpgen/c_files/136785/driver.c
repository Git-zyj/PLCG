#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5370906344835344669ULL;
long long int var_2 = 2385232524513205816LL;
unsigned int var_3 = 3079483948U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 6435732527953968760ULL;
unsigned int var_8 = 572171942U;
int var_9 = -1494011648;
int var_11 = -1661490407;
int var_12 = 1404804717;
int zero = 0;
long long int var_14 = -4452155530837497108LL;
unsigned int var_15 = 3678006016U;
void init() {
}

void checksum() {
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
