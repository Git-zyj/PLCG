#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19079;
short var_1 = (short)26125;
short var_2 = (short)-22875;
long long int var_7 = -7938978398533110506LL;
signed char var_9 = (signed char)-56;
short var_11 = (short)-28236;
unsigned int var_15 = 942275218U;
int zero = 0;
unsigned int var_17 = 1361367111U;
unsigned char var_18 = (unsigned char)150;
long long int var_19 = -6987894004710481592LL;
unsigned char var_20 = (unsigned char)162;
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
