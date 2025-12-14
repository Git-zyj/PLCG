#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_13 = (unsigned short)9955;
int zero = 0;
long long int var_15 = -7825040334283699478LL;
unsigned char var_16 = (unsigned char)128;
unsigned long long int var_17 = 13767910807057398982ULL;
unsigned char var_18 = (unsigned char)185;
signed char var_19 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
