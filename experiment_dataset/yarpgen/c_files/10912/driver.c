#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 161171570;
int var_2 = 1353002397;
int var_3 = -817956205;
_Bool var_6 = (_Bool)1;
int var_7 = 1400331030;
unsigned long long int var_8 = 7402968662890198276ULL;
int var_10 = -273540528;
int zero = 0;
int var_12 = 85405263;
unsigned long long int var_13 = 17836517584555334166ULL;
unsigned long long int var_14 = 728215387906736933ULL;
unsigned long long int var_15 = 17389914674336770555ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
