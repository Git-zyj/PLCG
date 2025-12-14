#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7057700454798041630LL;
signed char var_3 = (signed char)-125;
long long int var_6 = 1362919413000964871LL;
signed char var_7 = (signed char)72;
int var_11 = 1656239165;
int var_12 = 409105630;
unsigned long long int var_13 = 8237820175633813443ULL;
int zero = 0;
unsigned long long int var_14 = 16399930859601891672ULL;
unsigned int var_15 = 3484661706U;
unsigned short var_16 = (unsigned short)63096;
void init() {
}

void checksum() {
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
