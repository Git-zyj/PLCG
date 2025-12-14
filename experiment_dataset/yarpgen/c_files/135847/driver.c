#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-38;
short var_2 = (short)-13263;
unsigned char var_5 = (unsigned char)16;
int var_9 = -445024239;
signed char var_10 = (signed char)-3;
long long int var_11 = -7856294108988185981LL;
int zero = 0;
unsigned long long int var_12 = 3173152881015590919ULL;
long long int var_13 = -8739107879955657768LL;
short var_14 = (short)-16985;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
