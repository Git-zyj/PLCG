#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53210;
int var_2 = -897387766;
int var_4 = 837471612;
signed char var_11 = (signed char)-10;
unsigned int var_12 = 1259715441U;
signed char var_13 = (signed char)79;
unsigned char var_17 = (unsigned char)145;
int zero = 0;
long long int var_18 = 6931646090868475163LL;
unsigned long long int var_19 = 8227505920638344082ULL;
int var_20 = 1158503319;
_Bool var_21 = (_Bool)1;
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
