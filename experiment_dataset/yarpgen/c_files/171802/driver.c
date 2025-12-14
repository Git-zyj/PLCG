#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3969978766600016047LL;
_Bool var_7 = (_Bool)0;
unsigned short var_14 = (unsigned short)64256;
int var_15 = -786286656;
long long int var_16 = -7808114590055316344LL;
int zero = 0;
unsigned char var_19 = (unsigned char)165;
long long int var_20 = -6288673540001212851LL;
int var_21 = 1763428663;
unsigned long long int var_22 = 13063381480766331617ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
