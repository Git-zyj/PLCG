#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9160;
short var_3 = (short)19420;
long long int var_7 = -4101101973771986307LL;
unsigned char var_10 = (unsigned char)217;
unsigned long long int var_12 = 8302436382984965994ULL;
int var_13 = 1855420812;
long long int var_15 = -4519451544401870472LL;
unsigned char var_16 = (unsigned char)181;
int zero = 0;
short var_19 = (short)-21975;
unsigned short var_20 = (unsigned short)53492;
void init() {
}

void checksum() {
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
