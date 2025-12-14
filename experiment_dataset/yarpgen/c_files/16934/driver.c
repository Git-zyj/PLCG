#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54458;
short var_1 = (short)-11034;
int var_2 = -1982364697;
unsigned short var_4 = (unsigned short)48788;
short var_5 = (short)26284;
unsigned short var_7 = (unsigned short)33819;
long long int var_8 = -3365190926552824317LL;
unsigned short var_9 = (unsigned short)4283;
int var_10 = 457269685;
long long int var_13 = 6524776730700601545LL;
int var_14 = -537083015;
int var_16 = 836560874;
short var_18 = (short)-23089;
int zero = 0;
unsigned short var_19 = (unsigned short)35512;
unsigned char var_20 = (unsigned char)75;
long long int var_21 = 1553132670095086031LL;
int var_22 = -1919414248;
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
