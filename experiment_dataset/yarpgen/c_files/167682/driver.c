#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21662;
short var_3 = (short)-10606;
int var_7 = -51676992;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-9779;
unsigned char var_14 = (unsigned char)0;
int var_15 = 1581041378;
int zero = 0;
unsigned long long int var_19 = 9136771814975491722ULL;
unsigned char var_20 = (unsigned char)17;
long long int var_21 = -2980559384629110114LL;
long long int var_22 = -2850540275997657178LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
