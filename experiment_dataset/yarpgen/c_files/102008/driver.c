#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)196;
unsigned int var_2 = 4125779148U;
unsigned int var_3 = 4067434397U;
unsigned short var_4 = (unsigned short)42468;
unsigned char var_5 = (unsigned char)146;
unsigned char var_6 = (unsigned char)117;
unsigned int var_9 = 2284324411U;
unsigned char var_10 = (unsigned char)6;
unsigned char var_12 = (unsigned char)55;
unsigned char var_13 = (unsigned char)109;
unsigned long long int var_14 = 4067483584804994373ULL;
unsigned short var_15 = (unsigned short)32293;
unsigned long long int var_16 = 486787248403970245ULL;
unsigned int var_17 = 1661584756U;
int zero = 0;
unsigned short var_18 = (unsigned short)1130;
unsigned int var_19 = 1357745428U;
unsigned long long int var_20 = 8302115346355873027ULL;
unsigned long long int var_21 = 12373135186839215910ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
