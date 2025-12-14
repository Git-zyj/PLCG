#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3665;
long long int var_1 = 4375627338242692966LL;
short var_2 = (short)9760;
unsigned short var_3 = (unsigned short)49517;
long long int var_5 = -5746514278713215883LL;
unsigned char var_9 = (unsigned char)26;
unsigned char var_10 = (unsigned char)152;
short var_12 = (short)26651;
unsigned short var_17 = (unsigned short)31637;
int zero = 0;
unsigned short var_18 = (unsigned short)36209;
unsigned char var_19 = (unsigned char)254;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
