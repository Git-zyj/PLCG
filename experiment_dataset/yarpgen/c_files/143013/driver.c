#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)10721;
long long int var_9 = -957686502658044323LL;
unsigned short var_15 = (unsigned short)53545;
unsigned int var_17 = 2280813129U;
int zero = 0;
long long int var_18 = -6906670782176657113LL;
long long int var_19 = 6498469261988648557LL;
signed char var_20 = (signed char)126;
long long int var_21 = -7214625457482160679LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
