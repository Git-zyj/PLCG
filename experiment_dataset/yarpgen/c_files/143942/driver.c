#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 3812743568787653277ULL;
unsigned char var_12 = (unsigned char)105;
unsigned short var_13 = (unsigned short)10813;
unsigned long long int var_14 = 16011706375731954277ULL;
short var_17 = (short)-18208;
int zero = 0;
unsigned char var_18 = (unsigned char)162;
unsigned int var_19 = 1597929035U;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)50376;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
