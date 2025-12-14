#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1090520301;
long long int var_5 = 3954509691068000124LL;
unsigned char var_15 = (unsigned char)183;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 1005298892;
signed char var_20 = (signed char)-25;
int var_21 = 1900860038;
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
