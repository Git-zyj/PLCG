#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13059192514474799419ULL;
unsigned short var_2 = (unsigned short)8871;
signed char var_3 = (signed char)-29;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 216551630U;
unsigned int var_9 = 2905704167U;
int var_10 = -1428230988;
signed char var_12 = (signed char)115;
int zero = 0;
unsigned char var_13 = (unsigned char)55;
unsigned short var_14 = (unsigned short)57263;
unsigned char var_15 = (unsigned char)123;
int var_16 = -1508624701;
void init() {
}

void checksum() {
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
