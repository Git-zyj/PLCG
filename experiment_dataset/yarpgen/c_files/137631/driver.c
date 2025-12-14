#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-10;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)-103;
signed char var_6 = (signed char)-29;
short var_7 = (short)22191;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)241;
signed char var_11 = (signed char)48;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-107;
unsigned char var_15 = (unsigned char)82;
signed char var_16 = (signed char)-118;
unsigned char var_17 = (unsigned char)154;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
