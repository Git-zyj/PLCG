#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7562027966251776344ULL;
unsigned char var_2 = (unsigned char)121;
unsigned char var_4 = (unsigned char)88;
unsigned char var_5 = (unsigned char)243;
unsigned short var_8 = (unsigned short)10171;
short var_9 = (short)23898;
short var_15 = (short)9304;
int zero = 0;
unsigned char var_18 = (unsigned char)63;
short var_19 = (short)5071;
short var_20 = (short)-11820;
short var_21 = (short)-22718;
unsigned char var_22 = (unsigned char)58;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
