#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51966;
_Bool var_8 = (_Bool)0;
unsigned long long int var_14 = 14054701436817150943ULL;
int zero = 0;
unsigned long long int var_15 = 2592815947126315643ULL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)76;
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
