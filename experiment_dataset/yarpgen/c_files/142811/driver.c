#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)163;
unsigned short var_8 = (unsigned short)44481;
long long int var_10 = 8560460204125960427LL;
unsigned short var_13 = (unsigned short)30540;
int zero = 0;
unsigned char var_16 = (unsigned char)240;
unsigned int var_17 = 424842027U;
unsigned long long int var_18 = 2328099663447986104ULL;
signed char var_19 = (signed char)103;
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
