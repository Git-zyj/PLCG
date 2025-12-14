#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
_Bool var_1 = (_Bool)0;
short var_2 = (short)433;
_Bool var_4 = (_Bool)0;
unsigned long long int var_11 = 10655900348858804357ULL;
short var_13 = (short)10033;
unsigned char var_15 = (unsigned char)29;
int zero = 0;
signed char var_18 = (signed char)-1;
unsigned short var_19 = (unsigned short)19495;
unsigned short var_20 = (unsigned short)6578;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
