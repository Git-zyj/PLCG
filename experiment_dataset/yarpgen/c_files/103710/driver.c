#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6152405744920949551LL;
unsigned long long int var_3 = 8904970150850649206ULL;
unsigned int var_4 = 189264010U;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)27;
unsigned char var_7 = (unsigned char)65;
unsigned short var_9 = (unsigned short)241;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 13903296699844501131ULL;
unsigned long long int var_13 = 9205638696223655332ULL;
long long int var_14 = 3250506885680430981LL;
long long int var_15 = 1058936936721430093LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
