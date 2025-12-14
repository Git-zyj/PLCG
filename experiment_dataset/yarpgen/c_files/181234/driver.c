#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1608454206;
unsigned char var_10 = (unsigned char)44;
unsigned char var_11 = (unsigned char)110;
unsigned long long int var_12 = 12105461377594028577ULL;
unsigned char var_15 = (unsigned char)89;
int zero = 0;
unsigned short var_19 = (unsigned short)13716;
long long int var_20 = 640641183000657134LL;
unsigned long long int var_21 = 6295896206717711772ULL;
void init() {
}

void checksum() {
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
