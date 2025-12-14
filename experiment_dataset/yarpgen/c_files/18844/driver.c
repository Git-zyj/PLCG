#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 119970835;
int var_3 = 1944036006;
unsigned short var_7 = (unsigned short)59482;
unsigned long long int var_9 = 10705211375140143843ULL;
long long int var_10 = -3074365074854296763LL;
unsigned long long int var_12 = 7169811731185682875ULL;
long long int var_13 = 777158804079527106LL;
unsigned short var_18 = (unsigned short)48617;
int zero = 0;
unsigned char var_20 = (unsigned char)252;
unsigned long long int var_21 = 3802690701323446191ULL;
unsigned short var_22 = (unsigned short)56858;
unsigned short var_23 = (unsigned short)25779;
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
