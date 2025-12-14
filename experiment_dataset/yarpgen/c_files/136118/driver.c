#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)10;
unsigned long long int var_5 = 17248693213891367763ULL;
unsigned short var_7 = (unsigned short)34423;
unsigned long long int var_8 = 15798641630819634560ULL;
int var_13 = 495216294;
unsigned long long int var_14 = 1054832069082202921ULL;
signed char var_16 = (signed char)-94;
int zero = 0;
int var_17 = 1275850314;
unsigned char var_18 = (unsigned char)236;
unsigned long long int var_19 = 3361903301724827128ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
