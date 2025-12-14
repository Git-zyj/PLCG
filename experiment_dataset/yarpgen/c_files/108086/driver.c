#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_5 = 8001990423997575023LL;
unsigned char var_8 = (unsigned char)151;
long long int var_9 = 7842582108573159416LL;
unsigned long long int var_10 = 12102104934187313036ULL;
int var_13 = -1275129636;
long long int var_16 = 2224122950126851636LL;
int zero = 0;
short var_19 = (short)20558;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)29801;
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
