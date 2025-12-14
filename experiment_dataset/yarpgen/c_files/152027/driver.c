#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)197;
signed char var_3 = (signed char)92;
unsigned char var_6 = (unsigned char)107;
unsigned long long int var_10 = 15633030029746020233ULL;
unsigned long long int var_12 = 17726591163791628078ULL;
short var_13 = (short)15562;
long long int var_15 = -7056216094528181031LL;
unsigned short var_16 = (unsigned short)45868;
int zero = 0;
long long int var_18 = -920023679734415181LL;
unsigned int var_19 = 773274194U;
long long int var_20 = -8472240874548278722LL;
unsigned long long int var_21 = 17677929722728839517ULL;
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
