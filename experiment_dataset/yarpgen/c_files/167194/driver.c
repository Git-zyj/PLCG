#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)27;
unsigned long long int var_6 = 4234189730140541160ULL;
short var_14 = (short)26702;
unsigned short var_17 = (unsigned short)35051;
int zero = 0;
long long int var_18 = 6575119700308055093LL;
long long int var_19 = -8206143946273529629LL;
unsigned short var_20 = (unsigned short)9539;
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
