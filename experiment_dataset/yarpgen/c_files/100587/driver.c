#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
unsigned short var_2 = (unsigned short)2337;
unsigned int var_3 = 3975541940U;
unsigned long long int var_4 = 17635536129426433663ULL;
unsigned short var_6 = (unsigned short)4666;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)9;
int var_10 = 832471791;
int zero = 0;
int var_11 = 1913499609;
short var_12 = (short)8412;
short var_13 = (short)-3696;
short var_14 = (short)-6909;
unsigned char var_15 = (unsigned char)161;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
