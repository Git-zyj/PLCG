#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)101;
unsigned char var_9 = (unsigned char)144;
short var_10 = (short)19226;
long long int var_11 = 2393338536433797561LL;
unsigned short var_16 = (unsigned short)52755;
unsigned char var_18 = (unsigned char)32;
long long int var_19 = 2758294888740483460LL;
int zero = 0;
unsigned long long int var_20 = 1071006191413731745ULL;
unsigned char var_21 = (unsigned char)255;
unsigned long long int var_22 = 9588551814009139730ULL;
long long int var_23 = -7868921531077004676LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
