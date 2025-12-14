#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -129203531770658820LL;
unsigned char var_4 = (unsigned char)215;
int var_7 = 1100906109;
unsigned int var_9 = 2738315864U;
int var_11 = -832181761;
short var_12 = (short)9057;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)5;
unsigned short var_16 = (unsigned short)55590;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 3563997747883556472ULL;
unsigned short var_20 = (unsigned short)10701;
void init() {
}

void checksum() {
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
