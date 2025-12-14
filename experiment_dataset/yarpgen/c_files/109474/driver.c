#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 539330387U;
unsigned long long int var_3 = 9029232848644842977ULL;
unsigned long long int var_7 = 17627164260753117101ULL;
long long int var_10 = -8178685487364983758LL;
long long int var_11 = -2318359294658018998LL;
unsigned long long int var_14 = 18356547484311767659ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)29;
unsigned short var_21 = (unsigned short)169;
unsigned int var_22 = 1027729750U;
int var_23 = 1143556490;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
