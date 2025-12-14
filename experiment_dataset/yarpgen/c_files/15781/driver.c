#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13211910370131890608ULL;
unsigned int var_4 = 1296060336U;
unsigned long long int var_7 = 10453903177669352450ULL;
unsigned short var_9 = (unsigned short)31702;
unsigned short var_11 = (unsigned short)4257;
int zero = 0;
unsigned char var_13 = (unsigned char)35;
long long int var_14 = -2175673245213199104LL;
signed char var_15 = (signed char)48;
void init() {
}

void checksum() {
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
