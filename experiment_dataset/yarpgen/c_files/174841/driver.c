#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36803;
long long int var_3 = 3168100204548777472LL;
unsigned long long int var_6 = 6069686977523421450ULL;
int var_7 = -1354414180;
signed char var_9 = (signed char)15;
int var_11 = -477515905;
int var_13 = 1454557844;
int zero = 0;
unsigned char var_15 = (unsigned char)60;
short var_16 = (short)-1702;
short var_17 = (short)17550;
void init() {
}

void checksum() {
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
