#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30583;
int var_3 = 894767004;
unsigned long long int var_4 = 10062670327880048907ULL;
short var_6 = (short)14044;
int var_8 = 292942967;
short var_9 = (short)2230;
unsigned long long int var_10 = 7821806267883740191ULL;
int zero = 0;
long long int var_11 = -9110265619379675680LL;
unsigned char var_12 = (unsigned char)4;
unsigned int var_13 = 1970796374U;
signed char var_14 = (signed char)124;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
