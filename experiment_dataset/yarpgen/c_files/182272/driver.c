#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8953944472672231282ULL;
unsigned short var_5 = (unsigned short)52546;
unsigned short var_8 = (unsigned short)29571;
unsigned long long int var_14 = 5081649133456218406ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)45623;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
