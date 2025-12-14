#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3931673208815616177LL;
unsigned char var_1 = (unsigned char)197;
unsigned short var_2 = (unsigned short)61244;
unsigned int var_3 = 1081325492U;
int var_6 = 1747647228;
unsigned short var_7 = (unsigned short)53228;
signed char var_8 = (signed char)-69;
int zero = 0;
long long int var_16 = 1941411411286198255LL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)30484;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
