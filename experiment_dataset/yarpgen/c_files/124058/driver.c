#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 596611419;
unsigned short var_6 = (unsigned short)42500;
int var_11 = 999707507;
unsigned long long int var_12 = 6166935471229645486ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)13582;
int var_20 = 523490664;
signed char var_21 = (signed char)51;
void init() {
}

void checksum() {
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
