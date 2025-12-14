#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)154;
long long int var_8 = 2945979417806617267LL;
signed char var_9 = (signed char)-64;
unsigned int var_11 = 592441292U;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 6177192704952185751LL;
unsigned long long int var_14 = 12943794330075190209ULL;
unsigned short var_15 = (unsigned short)39403;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
