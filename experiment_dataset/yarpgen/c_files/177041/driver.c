#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38547;
signed char var_1 = (signed char)-11;
signed char var_3 = (signed char)-108;
unsigned int var_6 = 405343762U;
unsigned char var_7 = (unsigned char)123;
unsigned char var_8 = (unsigned char)59;
unsigned long long int var_13 = 9263466132587249198ULL;
int zero = 0;
short var_15 = (short)31592;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
