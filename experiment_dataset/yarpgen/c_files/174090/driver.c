#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6929980824709739727LL;
int var_2 = -188034499;
long long int var_3 = 2957258578559946900LL;
unsigned short var_4 = (unsigned short)9050;
unsigned short var_5 = (unsigned short)6252;
int var_6 = -257820393;
long long int var_7 = -3099306138636647437LL;
unsigned short var_9 = (unsigned short)53535;
int zero = 0;
long long int var_10 = 104690844803179LL;
unsigned short var_11 = (unsigned short)31502;
unsigned short var_12 = (unsigned short)41198;
unsigned short var_13 = (unsigned short)27506;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
