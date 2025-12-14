#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-15;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)192;
short var_6 = (short)27297;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 17092097933985738102ULL;
long long int var_12 = 2702261696085347346LL;
int zero = 0;
unsigned short var_13 = (unsigned short)36382;
unsigned long long int var_14 = 2571100848256680184ULL;
signed char var_15 = (signed char)38;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
