#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6720102179162324838LL;
unsigned short var_1 = (unsigned short)16203;
unsigned char var_2 = (unsigned char)211;
unsigned int var_3 = 3914710283U;
unsigned int var_4 = 1944087397U;
signed char var_5 = (signed char)29;
short var_7 = (short)25096;
unsigned long long int var_8 = 1939561668097035928ULL;
unsigned int var_10 = 1239556632U;
unsigned long long int var_15 = 6737531102229664305ULL;
unsigned long long int var_16 = 12596914224233851882ULL;
unsigned short var_18 = (unsigned short)42663;
int zero = 0;
signed char var_19 = (signed char)112;
int var_20 = -1697164727;
int var_21 = -889679505;
signed char var_22 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
