#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-41;
signed char var_5 = (signed char)-27;
short var_6 = (short)-25368;
signed char var_7 = (signed char)105;
signed char var_9 = (signed char)-112;
short var_10 = (short)-10085;
signed char var_15 = (signed char)122;
int zero = 0;
unsigned int var_20 = 2857874730U;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)24468;
int var_23 = 1075204757;
signed char var_24 = (signed char)121;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
