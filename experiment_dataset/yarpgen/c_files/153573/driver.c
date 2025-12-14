#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6656;
signed char var_2 = (signed char)38;
unsigned int var_4 = 1672919951U;
long long int var_7 = 5285969202464232869LL;
unsigned int var_8 = 1905185477U;
long long int var_9 = -3896258971781005475LL;
unsigned char var_10 = (unsigned char)211;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)64403;
unsigned short var_13 = (unsigned short)6049;
unsigned char var_14 = (unsigned char)126;
unsigned int var_15 = 920962179U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
