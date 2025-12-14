#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6381005066363689100LL;
unsigned long long int var_1 = 11374107119343599669ULL;
unsigned char var_3 = (unsigned char)222;
signed char var_5 = (signed char)3;
long long int var_6 = -3475854818832583527LL;
int var_7 = 313841789;
unsigned char var_8 = (unsigned char)158;
signed char var_9 = (signed char)-123;
long long int var_10 = -5542636629689199643LL;
int zero = 0;
unsigned long long int var_12 = 6232286075454021848ULL;
unsigned long long int var_13 = 6478349723874991421ULL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)25;
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
