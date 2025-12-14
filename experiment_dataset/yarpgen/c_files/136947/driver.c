#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)47;
unsigned char var_2 = (unsigned char)217;
unsigned char var_3 = (unsigned char)195;
unsigned char var_5 = (unsigned char)206;
short var_6 = (short)-9404;
unsigned long long int var_7 = 10939467648038793843ULL;
unsigned long long int var_9 = 15461277314583131725ULL;
unsigned long long int var_10 = 944761228209602029ULL;
unsigned char var_12 = (unsigned char)34;
short var_13 = (short)9335;
unsigned char var_14 = (unsigned char)104;
int zero = 0;
unsigned long long int var_16 = 6774449771546799371ULL;
short var_17 = (short)-29832;
unsigned char var_18 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
