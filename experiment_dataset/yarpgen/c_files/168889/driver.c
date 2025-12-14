#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 660928234;
unsigned long long int var_4 = 11316047999100109890ULL;
short var_6 = (short)9947;
unsigned char var_7 = (unsigned char)226;
unsigned char var_8 = (unsigned char)202;
int var_9 = -1669679705;
int zero = 0;
unsigned short var_10 = (unsigned short)2472;
unsigned char var_11 = (unsigned char)182;
short var_12 = (short)18393;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
