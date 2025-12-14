#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)6465;
int var_4 = 1198900585;
unsigned char var_5 = (unsigned char)161;
unsigned short var_8 = (unsigned short)45180;
int var_11 = -1659739570;
long long int var_13 = 3054879602596345528LL;
unsigned short var_14 = (unsigned short)33966;
unsigned short var_15 = (unsigned short)686;
int zero = 0;
unsigned int var_17 = 2292432226U;
unsigned int var_18 = 1181712264U;
void init() {
}

void checksum() {
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
