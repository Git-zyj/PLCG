#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51253;
unsigned char var_2 = (unsigned char)52;
unsigned int var_5 = 1578764375U;
int var_6 = -1650023710;
unsigned char var_7 = (unsigned char)109;
long long int var_11 = -3848222268849495578LL;
int zero = 0;
int var_12 = 1342174551;
unsigned char var_13 = (unsigned char)111;
unsigned long long int var_14 = 6280604157640530383ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
