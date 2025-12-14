#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-76;
short var_2 = (short)-4537;
short var_4 = (short)-631;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 8324403317917616528ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)75;
unsigned char var_16 = (unsigned char)135;
int var_17 = 2041279161;
unsigned short var_18 = (unsigned short)64655;
unsigned long long int var_19 = 2902068291579102330ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
