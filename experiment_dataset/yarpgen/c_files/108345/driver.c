#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -737415410;
unsigned int var_2 = 4221803344U;
signed char var_3 = (signed char)28;
signed char var_5 = (signed char)68;
unsigned char var_6 = (unsigned char)89;
unsigned short var_12 = (unsigned short)51227;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 14393880485208682887ULL;
unsigned long long int var_16 = 13094769465103068180ULL;
void init() {
}

void checksum() {
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
