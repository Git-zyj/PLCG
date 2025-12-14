#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1032435171;
int var_3 = 2014203740;
long long int var_4 = 99343087789474935LL;
unsigned char var_7 = (unsigned char)19;
unsigned short var_11 = (unsigned short)26927;
unsigned long long int var_15 = 1746352702163132263ULL;
long long int var_16 = -6111981503530594305LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)1771;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
