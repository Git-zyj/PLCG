#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4326262217078010119ULL;
int var_6 = -933689868;
int var_7 = -1057731576;
unsigned short var_10 = (unsigned short)60592;
unsigned short var_14 = (unsigned short)40837;
unsigned short var_17 = (unsigned short)52446;
int zero = 0;
unsigned long long int var_20 = 5339775962930989390ULL;
unsigned short var_21 = (unsigned short)19227;
int var_22 = 298632291;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
