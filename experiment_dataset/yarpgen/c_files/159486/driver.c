#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2139979978;
int var_3 = 1552852874;
unsigned long long int var_5 = 16539479031133937090ULL;
signed char var_7 = (signed char)-58;
short var_9 = (short)-26455;
signed char var_11 = (signed char)-70;
int zero = 0;
unsigned long long int var_12 = 8002000889247584009ULL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)4;
short var_15 = (short)-5483;
long long int var_16 = -3475525839532230668LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
