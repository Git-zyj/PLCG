#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)21304;
unsigned long long int var_3 = 3293220403030000676ULL;
unsigned short var_4 = (unsigned short)51226;
unsigned char var_8 = (unsigned char)221;
short var_13 = (short)16277;
unsigned short var_19 = (unsigned short)23758;
int zero = 0;
signed char var_20 = (signed char)-106;
_Bool var_21 = (_Bool)1;
short var_22 = (short)17200;
unsigned short var_23 = (unsigned short)36286;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
