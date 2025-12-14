#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12639034467380485443ULL;
unsigned long long int var_6 = 14730396603475186453ULL;
long long int var_9 = -2663704008071989803LL;
unsigned short var_13 = (unsigned short)26349;
signed char var_15 = (signed char)-23;
unsigned char var_18 = (unsigned char)179;
int var_19 = 926403259;
int zero = 0;
long long int var_20 = -6793668343367747213LL;
long long int var_21 = 6437602945312868293LL;
unsigned short var_22 = (unsigned short)17071;
void init() {
}

void checksum() {
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
