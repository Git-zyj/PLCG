#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 289870045764577530LL;
unsigned int var_3 = 2887398425U;
unsigned short var_4 = (unsigned short)620;
int var_6 = 196371519;
int var_10 = 1339362951;
unsigned int var_11 = 3581501360U;
int zero = 0;
long long int var_12 = -2355638019235709059LL;
signed char var_13 = (signed char)100;
unsigned char var_14 = (unsigned char)227;
signed char var_15 = (signed char)123;
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
