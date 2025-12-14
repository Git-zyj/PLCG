#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)62949;
unsigned char var_9 = (unsigned char)244;
long long int var_11 = 5469362674082382013LL;
long long int var_14 = 497473017459440521LL;
int zero = 0;
int var_18 = -855065863;
long long int var_19 = -5229650930599614433LL;
unsigned char var_20 = (unsigned char)3;
void init() {
}

void checksum() {
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
