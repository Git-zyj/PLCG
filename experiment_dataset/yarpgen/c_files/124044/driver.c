#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)65;
unsigned long long int var_8 = 13665285704672533488ULL;
unsigned char var_9 = (unsigned char)181;
signed char var_14 = (signed char)-127;
unsigned long long int var_16 = 1909455618125764465ULL;
int zero = 0;
int var_17 = 843578002;
unsigned short var_18 = (unsigned short)2656;
unsigned long long int var_19 = 9861711755443808481ULL;
unsigned char var_20 = (unsigned char)138;
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
