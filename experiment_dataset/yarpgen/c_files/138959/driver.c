#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5479557408073026499LL;
unsigned char var_3 = (unsigned char)104;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)237;
signed char var_16 = (signed char)117;
int zero = 0;
unsigned char var_17 = (unsigned char)110;
unsigned long long int var_18 = 16530906421467384352ULL;
short var_19 = (short)26393;
unsigned short var_20 = (unsigned short)2538;
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
