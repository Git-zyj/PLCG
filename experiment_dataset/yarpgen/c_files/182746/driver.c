#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)134;
signed char var_8 = (signed char)-41;
long long int var_10 = 2585750163017663557LL;
unsigned char var_11 = (unsigned char)173;
int zero = 0;
unsigned int var_13 = 3165251925U;
unsigned long long int var_14 = 14540749874187703998ULL;
int var_15 = -811238371;
long long int var_16 = -6873171223305942030LL;
long long int var_17 = 5794415944648963633LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
