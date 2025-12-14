#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -136932581;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)61168;
unsigned short var_15 = (unsigned short)20350;
long long int var_16 = 2491900314303851092LL;
int zero = 0;
long long int var_19 = -454581219735810493LL;
unsigned char var_20 = (unsigned char)173;
int var_21 = 796249470;
signed char var_22 = (signed char)-85;
int var_23 = 1604089297;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
