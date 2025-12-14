#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5931;
_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 2133203929995939241ULL;
short var_11 = (short)2264;
long long int var_12 = -1955377337805619644LL;
short var_13 = (short)22280;
int zero = 0;
unsigned char var_15 = (unsigned char)118;
unsigned long long int var_16 = 4089060990916551047ULL;
unsigned int var_17 = 110453945U;
unsigned short var_18 = (unsigned short)46370;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
