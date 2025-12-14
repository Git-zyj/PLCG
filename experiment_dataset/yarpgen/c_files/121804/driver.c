#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9316130002841448932ULL;
unsigned long long int var_2 = 15479601202380538771ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)47505;
unsigned char var_12 = (unsigned char)74;
long long int var_14 = 3266022861389234853LL;
int zero = 0;
unsigned char var_16 = (unsigned char)132;
_Bool var_17 = (_Bool)1;
short var_18 = (short)1448;
short var_19 = (short)-10879;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
