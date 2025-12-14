#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)202;
long long int var_2 = 1228508974885537324LL;
short var_3 = (short)18385;
long long int var_8 = -2636524500986495841LL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-81;
int zero = 0;
unsigned int var_16 = 976418098U;
int var_17 = 809670153;
void init() {
}

void checksum() {
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
