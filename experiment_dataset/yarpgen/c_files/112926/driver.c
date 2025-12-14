#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)194;
signed char var_2 = (signed char)77;
unsigned int var_3 = 1738007887U;
short var_4 = (short)22420;
signed char var_5 = (signed char)-47;
unsigned short var_8 = (unsigned short)17966;
long long int var_9 = -5065796274899363725LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 8475676122954366752LL;
unsigned char var_16 = (unsigned char)251;
unsigned int var_17 = 3148140759U;
void init() {
}

void checksum() {
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
