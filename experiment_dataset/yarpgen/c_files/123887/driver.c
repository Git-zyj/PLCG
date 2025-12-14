#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4909682180235134715LL;
int var_5 = 1775387247;
_Bool var_6 = (_Bool)0;
int var_9 = -1723141056;
unsigned char var_12 = (unsigned char)165;
int zero = 0;
unsigned short var_14 = (unsigned short)27753;
unsigned long long int var_15 = 16270281957348762202ULL;
long long int var_16 = -7706162226732544825LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
