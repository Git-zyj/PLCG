#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_13 = (unsigned short)51890;
unsigned char var_15 = (unsigned char)204;
int var_17 = -154110611;
int zero = 0;
unsigned char var_19 = (unsigned char)227;
_Bool var_20 = (_Bool)1;
long long int var_21 = -2216385733584600122LL;
short var_22 = (short)10090;
unsigned long long int var_23 = 2342267207526746812ULL;
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
