#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1730977714;
unsigned short var_2 = (unsigned short)20104;
unsigned int var_6 = 3406316556U;
long long int var_7 = -3923556512063918228LL;
short var_8 = (short)-16416;
long long int var_9 = -3881280967689894141LL;
unsigned int var_11 = 2367725923U;
int zero = 0;
unsigned short var_12 = (unsigned short)55635;
signed char var_13 = (signed char)30;
short var_14 = (short)197;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
