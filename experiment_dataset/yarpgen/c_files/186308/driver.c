#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)44353;
int var_11 = -717959848;
int zero = 0;
unsigned int var_19 = 1751300604U;
unsigned char var_20 = (unsigned char)39;
int var_21 = -131445781;
int var_22 = 1187063610;
int var_23 = 2099684196;
unsigned int var_24 = 2339729531U;
unsigned int var_25 = 769462667U;
signed char var_26 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
