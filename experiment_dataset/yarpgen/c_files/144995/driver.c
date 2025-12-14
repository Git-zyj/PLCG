#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
unsigned char var_2 = (unsigned char)240;
unsigned int var_6 = 246479539U;
int var_7 = 223811163;
unsigned char var_8 = (unsigned char)181;
unsigned int var_9 = 159834217U;
unsigned long long int var_12 = 9975128496427990248ULL;
unsigned short var_16 = (unsigned short)16841;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)48938;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
