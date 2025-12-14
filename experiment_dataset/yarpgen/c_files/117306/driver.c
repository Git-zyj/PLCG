#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58422;
_Bool var_1 = (_Bool)0;
int var_3 = 1822780962;
long long int var_4 = 1100863816553333828LL;
unsigned short var_7 = (unsigned short)19233;
_Bool var_10 = (_Bool)1;
short var_13 = (short)-19180;
int zero = 0;
unsigned short var_16 = (unsigned short)62752;
long long int var_17 = 1926923671366671073LL;
short var_18 = (short)8757;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
