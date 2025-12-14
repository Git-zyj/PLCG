#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)47;
short var_4 = (short)3844;
unsigned short var_8 = (unsigned short)25332;
short var_10 = (short)-21700;
long long int var_17 = 6036786217201569820LL;
int zero = 0;
short var_18 = (short)21704;
short var_19 = (short)28196;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-26639;
signed char var_22 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
