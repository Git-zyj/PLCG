#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7043043537201446339LL;
unsigned char var_2 = (unsigned char)87;
signed char var_7 = (signed char)24;
unsigned short var_9 = (unsigned short)64202;
long long int var_10 = 4309586794486377948LL;
int zero = 0;
unsigned long long int var_17 = 9114326248624000446ULL;
unsigned char var_18 = (unsigned char)46;
int var_19 = -221181387;
unsigned char var_20 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
