#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3620374572U;
unsigned short var_7 = (unsigned short)22705;
unsigned int var_10 = 1785710038U;
unsigned char var_12 = (unsigned char)113;
unsigned char var_13 = (unsigned char)28;
long long int var_15 = 9016368059948885677LL;
int zero = 0;
unsigned short var_17 = (unsigned short)22045;
unsigned long long int var_18 = 18303665233837943511ULL;
short var_19 = (short)28383;
signed char var_20 = (signed char)-27;
unsigned long long int var_21 = 17415594684000248481ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
