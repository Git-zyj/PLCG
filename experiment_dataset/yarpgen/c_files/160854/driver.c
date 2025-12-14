#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 196420654;
signed char var_6 = (signed char)-90;
int var_9 = -1028345986;
int var_11 = 1730579436;
unsigned long long int var_14 = 13396775504886230066ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)62274;
unsigned long long int var_17 = 7812497572106342443ULL;
unsigned char var_18 = (unsigned char)108;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
