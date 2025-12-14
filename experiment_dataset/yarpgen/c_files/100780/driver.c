#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -988275847;
unsigned long long int var_1 = 11887819250795211846ULL;
signed char var_2 = (signed char)-86;
unsigned long long int var_3 = 13662344147869377000ULL;
long long int var_4 = -1974937336229117404LL;
long long int var_5 = -798874094031612551LL;
int var_6 = 267842097;
signed char var_7 = (signed char)35;
int var_8 = -180190050;
int var_9 = 179683974;
int zero = 0;
signed char var_10 = (signed char)4;
unsigned int var_11 = 2391040833U;
unsigned short var_12 = (unsigned short)44846;
unsigned long long int var_13 = 3249866949657594819ULL;
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
