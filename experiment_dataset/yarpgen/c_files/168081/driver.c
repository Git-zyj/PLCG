#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)64;
short var_9 = (short)7103;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)-44;
signed char var_13 = (signed char)102;
int zero = 0;
unsigned short var_17 = (unsigned short)27621;
signed char var_18 = (signed char)-72;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
