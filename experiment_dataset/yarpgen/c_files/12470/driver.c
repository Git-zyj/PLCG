#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)144;
int var_5 = 1463677322;
unsigned short var_8 = (unsigned short)62082;
short var_9 = (short)-25738;
signed char var_10 = (signed char)126;
int var_11 = 1795107826;
long long int var_12 = -8558472914605999197LL;
unsigned short var_13 = (unsigned short)32890;
int zero = 0;
int var_15 = -1271354435;
int var_16 = -1971965665;
int var_17 = 289857674;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
