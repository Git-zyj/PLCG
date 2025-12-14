#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 403286795;
int var_2 = 1647964377;
long long int var_6 = -4077081764751206068LL;
unsigned short var_7 = (unsigned short)56486;
int zero = 0;
int var_17 = 1718255370;
short var_18 = (short)14710;
int var_19 = 328774859;
unsigned char var_20 = (unsigned char)117;
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
