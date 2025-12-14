#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1592607087;
int var_4 = 1848488348;
unsigned char var_6 = (unsigned char)167;
unsigned char var_10 = (unsigned char)210;
long long int var_18 = -5397561885229930073LL;
int zero = 0;
unsigned short var_19 = (unsigned short)915;
short var_20 = (short)4025;
long long int var_21 = -4502957886281312184LL;
short var_22 = (short)-15869;
short var_23 = (short)29867;
int var_24 = 172219346;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
