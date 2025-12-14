#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6711486735060268626ULL;
unsigned char var_1 = (unsigned char)77;
unsigned long long int var_4 = 9818400290430540127ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 179381119843466616ULL;
unsigned short var_12 = (unsigned short)49170;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
