#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)99;
unsigned short var_2 = (unsigned short)45150;
long long int var_3 = -8402269973396809457LL;
long long int var_5 = 287536824602129280LL;
unsigned short var_6 = (unsigned short)61197;
unsigned char var_9 = (unsigned char)167;
long long int var_11 = 2323804926278917389LL;
int zero = 0;
unsigned char var_12 = (unsigned char)151;
unsigned int var_13 = 3270853930U;
unsigned int var_14 = 1697725729U;
int var_15 = -386959148;
unsigned short var_16 = (unsigned short)10788;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
