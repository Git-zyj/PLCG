#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14541412282004630901ULL;
unsigned long long int var_1 = 15678314141033710037ULL;
unsigned int var_3 = 1217756099U;
long long int var_6 = 4232106908075679175LL;
unsigned short var_7 = (unsigned short)37736;
unsigned long long int var_8 = 14563847447763027321ULL;
int var_9 = 1973121718;
unsigned char var_10 = (unsigned char)151;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)53808;
short var_13 = (short)-4847;
unsigned char var_14 = (unsigned char)180;
unsigned char var_15 = (unsigned char)22;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
