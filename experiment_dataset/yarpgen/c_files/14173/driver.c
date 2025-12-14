#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)49;
long long int var_4 = -5213961457492039169LL;
signed char var_8 = (signed char)88;
long long int var_9 = 8174488933613379397LL;
signed char var_13 = (signed char)87;
unsigned int var_14 = 4130553358U;
short var_15 = (short)18583;
unsigned long long int var_16 = 3817963077766124482ULL;
int zero = 0;
unsigned long long int var_17 = 5989235426825613208ULL;
unsigned char var_18 = (unsigned char)121;
unsigned short var_19 = (unsigned short)26633;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
