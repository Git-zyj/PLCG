#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1032;
unsigned int var_1 = 2302958561U;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)10823;
long long int var_10 = 4866076114819241176LL;
unsigned short var_11 = (unsigned short)35297;
short var_14 = (short)-10914;
int zero = 0;
long long int var_19 = -3639985818880211594LL;
unsigned long long int var_20 = 16970291237170248805ULL;
void init() {
}

void checksum() {
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
