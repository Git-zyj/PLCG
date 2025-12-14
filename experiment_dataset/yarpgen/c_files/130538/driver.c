#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -66149409;
unsigned short var_6 = (unsigned short)64457;
unsigned int var_9 = 1475665617U;
int var_13 = 769400151;
unsigned char var_16 = (unsigned char)190;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 1032976296U;
int var_19 = -1517602903;
signed char var_20 = (signed char)54;
unsigned long long int var_21 = 10793943646072691041ULL;
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
