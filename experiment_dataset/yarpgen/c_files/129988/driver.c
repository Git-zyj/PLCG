#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)233;
unsigned long long int var_3 = 12909964565983127283ULL;
unsigned char var_6 = (unsigned char)19;
long long int var_7 = -6499367306662073948LL;
unsigned int var_11 = 2446417637U;
int zero = 0;
unsigned int var_12 = 4210915255U;
unsigned char var_13 = (unsigned char)104;
unsigned long long int var_14 = 8013097859508679324ULL;
long long int var_15 = 273783222481809289LL;
unsigned long long int var_16 = 12386231742345646953ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
