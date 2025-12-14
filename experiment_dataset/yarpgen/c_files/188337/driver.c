#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
unsigned short var_1 = (unsigned short)51009;
_Bool var_4 = (_Bool)1;
int var_6 = -1802745100;
unsigned short var_7 = (unsigned short)63311;
_Bool var_8 = (_Bool)0;
int var_9 = 85593445;
int var_11 = 1877845422;
long long int var_17 = -5508688943320777195LL;
int var_19 = -142614296;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 12957005360663395400ULL;
long long int var_22 = 4243020890202162813LL;
int var_23 = 1485585597;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
