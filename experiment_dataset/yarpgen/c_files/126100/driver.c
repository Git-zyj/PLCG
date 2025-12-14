#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)125;
unsigned short var_2 = (unsigned short)10956;
unsigned char var_5 = (unsigned char)83;
unsigned long long int var_9 = 13886590142042642213ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_15 = 43347673206587181ULL;
int zero = 0;
short var_18 = (short)6533;
signed char var_19 = (signed char)-17;
short var_20 = (short)15600;
signed char var_21 = (signed char)-78;
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
