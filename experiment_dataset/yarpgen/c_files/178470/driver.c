#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13268663080066366409ULL;
unsigned int var_2 = 1173255274U;
unsigned char var_3 = (unsigned char)65;
long long int var_4 = 6532698163862930139LL;
unsigned long long int var_5 = 733050098460513118ULL;
unsigned short var_6 = (unsigned short)7028;
long long int var_7 = 3613460376548481966LL;
unsigned char var_8 = (unsigned char)15;
int var_9 = 586661671;
int zero = 0;
unsigned int var_10 = 2726089443U;
unsigned long long int var_11 = 7701917035220784657ULL;
short var_12 = (short)13507;
signed char var_13 = (signed char)-79;
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
