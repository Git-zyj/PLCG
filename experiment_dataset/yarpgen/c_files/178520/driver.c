#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14388604712209852407ULL;
short var_2 = (short)10551;
int var_3 = 1655433293;
short var_4 = (short)30734;
unsigned long long int var_5 = 17916731686705034013ULL;
int var_8 = 1266498616;
int zero = 0;
unsigned long long int var_10 = 12185179246900132033ULL;
unsigned long long int var_11 = 2285663054094267216ULL;
unsigned short var_12 = (unsigned short)54819;
unsigned char var_13 = (unsigned char)103;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
