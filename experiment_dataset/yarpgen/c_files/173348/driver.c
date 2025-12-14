#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6414905761412339376LL;
int var_11 = -1007571000;
int zero = 0;
short var_14 = (short)-11495;
signed char var_15 = (signed char)-103;
signed char var_16 = (signed char)-80;
unsigned char var_17 = (unsigned char)228;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
