#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)6172;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)102;
long long int var_7 = -6144800604525694291LL;
unsigned char var_9 = (unsigned char)254;
unsigned long long int var_10 = 4287360266137895100ULL;
unsigned short var_11 = (unsigned short)308;
int var_12 = -1986978627;
int zero = 0;
unsigned char var_15 = (unsigned char)211;
unsigned short var_16 = (unsigned short)61307;
signed char var_17 = (signed char)-35;
long long int var_18 = 147540705209787266LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
