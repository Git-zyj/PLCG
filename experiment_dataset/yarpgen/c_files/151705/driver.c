#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 45992538U;
unsigned char var_3 = (unsigned char)157;
unsigned int var_4 = 180276648U;
short var_12 = (short)-24538;
unsigned short var_14 = (unsigned short)22374;
int zero = 0;
unsigned int var_18 = 2137695083U;
long long int var_19 = -8328834716780682287LL;
signed char var_20 = (signed char)119;
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
