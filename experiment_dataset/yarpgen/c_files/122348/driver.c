#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
short var_8 = (short)22560;
signed char var_9 = (signed char)7;
unsigned char var_10 = (unsigned char)202;
unsigned char var_11 = (unsigned char)25;
short var_12 = (short)22916;
int zero = 0;
unsigned char var_17 = (unsigned char)202;
short var_18 = (short)29507;
unsigned long long int var_19 = 7050151947534992454ULL;
unsigned char var_20 = (unsigned char)199;
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
