#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_8 = -8056101706654947112LL;
long long int var_9 = 419956481270436235LL;
short var_16 = (short)29955;
signed char var_17 = (signed char)20;
int zero = 0;
unsigned long long int var_19 = 3555923559197095348ULL;
short var_20 = (short)32388;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
