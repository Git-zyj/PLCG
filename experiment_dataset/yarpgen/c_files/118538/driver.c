#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3684892347U;
long long int var_10 = -3073959841899907292LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_18 = (short)-18524;
unsigned char var_19 = (unsigned char)206;
unsigned long long int var_20 = 11743038878450245887ULL;
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
