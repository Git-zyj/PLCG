#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14577924446498597947ULL;
long long int var_4 = 5818679553882499162LL;
unsigned long long int var_5 = 11971949079828024976ULL;
unsigned long long int var_6 = 8250873852499995293ULL;
int var_11 = -1660067534;
int zero = 0;
unsigned long long int var_13 = 15465167196795039227ULL;
signed char var_14 = (signed char)27;
unsigned short var_15 = (unsigned short)33991;
signed char var_16 = (signed char)98;
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
