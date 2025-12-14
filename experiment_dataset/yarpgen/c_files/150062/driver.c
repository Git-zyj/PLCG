#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-63;
int var_5 = -1614709852;
unsigned char var_6 = (unsigned char)243;
unsigned long long int var_9 = 1008930913057817064ULL;
unsigned long long int var_10 = 2272334994155750298ULL;
unsigned int var_11 = 2370528966U;
unsigned char var_13 = (unsigned char)163;
unsigned short var_15 = (unsigned short)15445;
int var_17 = 1770204266;
int zero = 0;
unsigned char var_20 = (unsigned char)251;
unsigned short var_21 = (unsigned short)52190;
long long int var_22 = 5522214641012063110LL;
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
