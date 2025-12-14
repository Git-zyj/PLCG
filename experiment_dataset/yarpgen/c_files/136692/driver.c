#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-8;
signed char var_1 = (signed char)122;
long long int var_3 = 2000334956534325065LL;
unsigned long long int var_6 = 12091223705132253825ULL;
unsigned long long int var_7 = 6746837899729000507ULL;
long long int var_8 = 3921470099382916935LL;
signed char var_16 = (signed char)55;
int zero = 0;
unsigned long long int var_20 = 11135901504833317823ULL;
unsigned char var_21 = (unsigned char)9;
short var_22 = (short)29140;
signed char var_23 = (signed char)-19;
unsigned short var_24 = (unsigned short)4427;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
