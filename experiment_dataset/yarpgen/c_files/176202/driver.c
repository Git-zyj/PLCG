#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15654023248096625944ULL;
unsigned long long int var_2 = 12862168347938517255ULL;
signed char var_3 = (signed char)65;
long long int var_8 = 7194879278759129800LL;
unsigned char var_9 = (unsigned char)75;
int zero = 0;
unsigned short var_19 = (unsigned short)22516;
short var_20 = (short)-18862;
void init() {
}

void checksum() {
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
