#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)23514;
int var_3 = -32088496;
int var_5 = 1698165982;
unsigned int var_6 = 388522787U;
long long int var_7 = -7832608750767894097LL;
unsigned int var_11 = 3068834693U;
signed char var_13 = (signed char)-14;
signed char var_15 = (signed char)39;
unsigned short var_18 = (unsigned short)21695;
int zero = 0;
unsigned char var_19 = (unsigned char)169;
unsigned long long int var_20 = 644982560714747300ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
