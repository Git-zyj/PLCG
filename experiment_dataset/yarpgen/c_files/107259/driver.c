#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)44;
signed char var_2 = (signed char)-85;
unsigned char var_3 = (unsigned char)248;
unsigned int var_7 = 3389240983U;
_Bool var_9 = (_Bool)0;
long long int var_10 = -4258493073416102781LL;
unsigned char var_11 = (unsigned char)183;
long long int var_12 = 136858556128104705LL;
unsigned int var_13 = 342513391U;
int var_14 = -2073692879;
int zero = 0;
signed char var_16 = (signed char)105;
signed char var_17 = (signed char)83;
unsigned char var_18 = (unsigned char)174;
void init() {
}

void checksum() {
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
