#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 5814910047486712360ULL;
short var_7 = (short)-29005;
short var_8 = (short)9650;
short var_9 = (short)-1642;
int zero = 0;
unsigned char var_16 = (unsigned char)120;
long long int var_17 = -1058742918998156605LL;
unsigned long long int var_18 = 9385763229172681986ULL;
unsigned long long int var_19 = 9094001702186047478ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
