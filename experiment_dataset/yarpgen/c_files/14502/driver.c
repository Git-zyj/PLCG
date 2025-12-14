#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4428554631260192344ULL;
unsigned char var_5 = (unsigned char)51;
unsigned char var_6 = (unsigned char)217;
int var_7 = 1459121084;
unsigned int var_9 = 1962686860U;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 11636447546704993730ULL;
unsigned long long int var_12 = 18162732362706784399ULL;
unsigned int var_13 = 966443656U;
unsigned short var_19 = (unsigned short)28724;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 142864671U;
signed char var_22 = (signed char)-76;
void init() {
}

void checksum() {
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
