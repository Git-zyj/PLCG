#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)86;
unsigned short var_5 = (unsigned short)40249;
short var_8 = (short)666;
long long int var_11 = -7071422565143967777LL;
signed char var_15 = (signed char)-81;
int zero = 0;
unsigned char var_16 = (unsigned char)82;
unsigned short var_17 = (unsigned short)63122;
unsigned char var_18 = (unsigned char)136;
long long int var_19 = 6952259094849253949LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
