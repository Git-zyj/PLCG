#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9575715523489504350ULL;
_Bool var_4 = (_Bool)1;
long long int var_7 = 5805464311873278547LL;
unsigned short var_10 = (unsigned short)21948;
unsigned char var_11 = (unsigned char)238;
int zero = 0;
signed char var_14 = (signed char)-52;
int var_15 = 1152154695;
long long int var_16 = -3842866295898013894LL;
unsigned long long int var_17 = 4208739440256026535ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
