#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)6;
int var_2 = -2117925290;
int var_3 = -422481682;
unsigned short var_4 = (unsigned short)50257;
int var_7 = -393940009;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)51507;
signed char var_10 = (signed char)119;
unsigned short var_12 = (unsigned short)27771;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)219;
short var_16 = (short)29108;
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
