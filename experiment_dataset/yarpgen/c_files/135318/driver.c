#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2050385507;
signed char var_4 = (signed char)-103;
_Bool var_5 = (_Bool)0;
signed char var_9 = (signed char)-122;
int var_15 = -1198407291;
int var_17 = 2098036885;
int zero = 0;
signed char var_18 = (signed char)-58;
unsigned char var_19 = (unsigned char)62;
unsigned char var_20 = (unsigned char)163;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
