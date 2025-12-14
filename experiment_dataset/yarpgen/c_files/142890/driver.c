#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8316;
int var_3 = 1540077673;
unsigned long long int var_6 = 3088494001795407353ULL;
int var_8 = -2056760215;
short var_10 = (short)-13207;
unsigned long long int var_11 = 5367581739725199033ULL;
unsigned short var_12 = (unsigned short)24768;
signed char var_13 = (signed char)-110;
signed char var_14 = (signed char)-34;
signed char var_16 = (signed char)11;
unsigned long long int var_18 = 18319994887644943058ULL;
int zero = 0;
short var_19 = (short)5944;
int var_20 = -2004364433;
unsigned char var_21 = (unsigned char)164;
unsigned char var_22 = (unsigned char)108;
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
