#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26009;
_Bool var_3 = (_Bool)1;
int var_4 = 190954591;
long long int var_14 = -1121137992760802393LL;
unsigned short var_15 = (unsigned short)11512;
unsigned char var_18 = (unsigned char)119;
int zero = 0;
int var_19 = 1208715366;
signed char var_20 = (signed char)-103;
unsigned short var_21 = (unsigned short)37640;
short var_22 = (short)-2524;
void init() {
}

void checksum() {
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
