#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7811053643585374788LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 5860710404087871046ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)58499;
unsigned char var_8 = (unsigned char)204;
unsigned short var_11 = (unsigned short)32106;
int zero = 0;
int var_18 = 1988055954;
int var_19 = -113939477;
unsigned char var_20 = (unsigned char)61;
unsigned short var_21 = (unsigned short)13533;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
