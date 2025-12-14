#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7782789176626179082LL;
int var_4 = 1458805470;
unsigned char var_8 = (unsigned char)184;
unsigned short var_9 = (unsigned short)40933;
unsigned short var_10 = (unsigned short)9486;
short var_13 = (short)-10813;
signed char var_15 = (signed char)-9;
int zero = 0;
short var_16 = (short)22370;
unsigned char var_17 = (unsigned char)1;
long long int var_18 = -344338978202220844LL;
unsigned short var_19 = (unsigned short)8002;
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
