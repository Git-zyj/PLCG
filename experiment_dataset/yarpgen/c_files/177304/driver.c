#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 691092735;
unsigned short var_6 = (unsigned short)29988;
unsigned short var_7 = (unsigned short)17569;
long long int var_10 = -3794748241008048226LL;
int zero = 0;
long long int var_14 = 4351883932406627197LL;
unsigned char var_15 = (unsigned char)162;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
