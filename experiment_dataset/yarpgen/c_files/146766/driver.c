#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)985;
unsigned char var_6 = (unsigned char)217;
unsigned long long int var_7 = 4465940890692336058ULL;
unsigned int var_10 = 1103883344U;
unsigned long long int var_12 = 5867617919122649184ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)39795;
short var_14 = (short)-17570;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
