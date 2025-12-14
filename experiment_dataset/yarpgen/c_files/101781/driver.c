#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2557424557451090217LL;
unsigned char var_3 = (unsigned char)160;
int var_4 = 971283967;
long long int var_5 = 8128676515696743322LL;
long long int var_6 = 2118331550855023557LL;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)59286;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_16 = (short)22268;
unsigned long long int var_17 = 9281543861914217158ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
