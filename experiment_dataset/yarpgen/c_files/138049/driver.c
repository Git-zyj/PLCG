#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)202;
signed char var_2 = (signed char)-103;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)47;
signed char var_6 = (signed char)-70;
int var_7 = 1294650978;
unsigned int var_9 = 3704999223U;
signed char var_12 = (signed char)9;
short var_13 = (short)-27300;
unsigned short var_15 = (unsigned short)46575;
unsigned char var_16 = (unsigned char)214;
int zero = 0;
unsigned char var_17 = (unsigned char)169;
signed char var_18 = (signed char)-95;
short var_19 = (short)6922;
signed char var_20 = (signed char)31;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
