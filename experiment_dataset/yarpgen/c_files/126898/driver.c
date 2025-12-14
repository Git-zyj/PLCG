#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-58;
unsigned short var_3 = (unsigned short)41531;
signed char var_9 = (signed char)-10;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)65416;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_18 = (short)3417;
unsigned short var_19 = (unsigned short)64467;
unsigned char var_20 = (unsigned char)104;
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
