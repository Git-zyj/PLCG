#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12004;
long long int var_2 = -8547407823381569933LL;
unsigned char var_3 = (unsigned char)245;
int var_6 = -1401660638;
int var_7 = 959283879;
short var_8 = (short)-23282;
unsigned short var_9 = (unsigned short)47278;
unsigned long long int var_10 = 4160421578664910571ULL;
signed char var_11 = (signed char)34;
unsigned char var_13 = (unsigned char)223;
signed char var_14 = (signed char)-28;
signed char var_15 = (signed char)-47;
unsigned char var_16 = (unsigned char)55;
int zero = 0;
unsigned short var_17 = (unsigned short)23006;
unsigned short var_18 = (unsigned short)13067;
unsigned char var_19 = (unsigned char)104;
int var_20 = -1377345483;
short var_21 = (short)24300;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
