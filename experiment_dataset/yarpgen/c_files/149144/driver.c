#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10872178292115014450ULL;
signed char var_5 = (signed char)-25;
long long int var_7 = -4157959675498874514LL;
long long int var_8 = -7792378923036222377LL;
unsigned short var_9 = (unsigned short)6845;
unsigned long long int var_12 = 107715272324918846ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)52;
unsigned short var_16 = (unsigned short)56865;
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
