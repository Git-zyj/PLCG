#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
unsigned char var_3 = (unsigned char)27;
unsigned short var_5 = (unsigned short)18426;
short var_9 = (short)8977;
short var_10 = (short)1013;
unsigned char var_13 = (unsigned char)233;
int zero = 0;
long long int var_17 = -4057304854288772955LL;
long long int var_18 = -7631482093043873472LL;
long long int var_19 = 3254524837675169534LL;
short var_20 = (short)5999;
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
