#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
unsigned char var_1 = (unsigned char)218;
unsigned long long int var_8 = 3165934098498184281ULL;
unsigned short var_9 = (unsigned short)8216;
unsigned short var_15 = (unsigned short)2541;
int zero = 0;
signed char var_18 = (signed char)85;
long long int var_19 = 9066548905131531208LL;
unsigned short var_20 = (unsigned short)50440;
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
