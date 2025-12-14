#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)238;
unsigned long long int var_7 = 12671518822094482338ULL;
unsigned int var_8 = 693977264U;
signed char var_9 = (signed char)82;
long long int var_15 = 7202674218650018863LL;
unsigned short var_17 = (unsigned short)40627;
unsigned int var_18 = 3730272285U;
int zero = 0;
unsigned char var_19 = (unsigned char)105;
int var_20 = 15738961;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
