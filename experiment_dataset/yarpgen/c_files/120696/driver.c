#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1905986143378239785ULL;
int var_3 = 420439465;
signed char var_5 = (signed char)37;
signed char var_6 = (signed char)-113;
long long int var_7 = 4749403662261906206LL;
signed char var_9 = (signed char)90;
unsigned short var_10 = (unsigned short)29367;
int var_11 = -1865012690;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 1440170965U;
long long int var_14 = -1802545589005108384LL;
long long int var_15 = 5793509904462687155LL;
unsigned short var_16 = (unsigned short)22866;
unsigned char var_17 = (unsigned char)197;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
