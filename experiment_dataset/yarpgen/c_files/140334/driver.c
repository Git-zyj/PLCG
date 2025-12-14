#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16560525977162745840ULL;
long long int var_2 = 4355719136747747583LL;
unsigned int var_3 = 2555672024U;
long long int var_4 = 437504468719554193LL;
unsigned int var_6 = 2077816163U;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_12 = -571367571;
unsigned long long int var_13 = 11778306933065569913ULL;
int var_14 = -1993380496;
unsigned short var_15 = (unsigned short)1234;
_Bool var_16 = (_Bool)0;
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
