#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)128;
unsigned long long int var_5 = 11424585542417281865ULL;
unsigned long long int var_7 = 1574643447489806095ULL;
int var_9 = -59987431;
int var_16 = -831864791;
int zero = 0;
unsigned char var_17 = (unsigned char)195;
unsigned char var_18 = (unsigned char)23;
short var_19 = (short)-32248;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
