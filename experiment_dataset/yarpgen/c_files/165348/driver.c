#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-45;
int var_2 = -1505224090;
signed char var_3 = (signed char)17;
unsigned char var_4 = (unsigned char)31;
unsigned short var_10 = (unsigned short)27285;
_Bool var_12 = (_Bool)1;
short var_15 = (short)31429;
int zero = 0;
short var_17 = (short)-1288;
unsigned int var_18 = 97883752U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
