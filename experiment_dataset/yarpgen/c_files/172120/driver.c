#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3451167096U;
unsigned short var_5 = (unsigned short)53547;
unsigned long long int var_10 = 12360764461431987841ULL;
int zero = 0;
long long int var_16 = 5246250422889525987LL;
unsigned char var_17 = (unsigned char)122;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
