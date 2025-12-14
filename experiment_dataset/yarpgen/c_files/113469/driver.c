#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9105;
int var_3 = 54172898;
unsigned short var_6 = (unsigned short)23598;
int var_10 = -655804879;
int var_12 = 480879568;
_Bool var_14 = (_Bool)0;
short var_16 = (short)24535;
int zero = 0;
unsigned char var_19 = (unsigned char)68;
unsigned char var_20 = (unsigned char)50;
unsigned long long int var_21 = 7433270730168486443ULL;
unsigned char var_22 = (unsigned char)1;
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
