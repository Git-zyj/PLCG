#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)31482;
unsigned short var_11 = (unsigned short)13411;
unsigned char var_12 = (unsigned char)239;
int zero = 0;
long long int var_18 = 1166868850032378367LL;
int var_19 = 1042710316;
short var_20 = (short)8423;
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
