#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54397;
short var_1 = (short)30804;
short var_2 = (short)-23071;
short var_3 = (short)1637;
unsigned short var_4 = (unsigned short)42279;
signed char var_5 = (signed char)-115;
signed char var_6 = (signed char)74;
unsigned short var_7 = (unsigned short)35242;
long long int var_8 = -8150162635750111739LL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 16158996851410151868ULL;
int var_11 = -1787343145;
long long int var_12 = 5688528260524173090LL;
int zero = 0;
unsigned int var_13 = 3132189644U;
unsigned int var_14 = 3283864788U;
long long int var_15 = 4718070403654433652LL;
long long int var_16 = -5991357431727971613LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
