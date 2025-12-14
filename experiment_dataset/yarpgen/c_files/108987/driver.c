#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1230322957;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)16;
unsigned char var_5 = (unsigned char)213;
long long int var_6 = 9079248802274454064LL;
signed char var_8 = (signed char)82;
unsigned int var_12 = 384550710U;
unsigned long long int var_13 = 8998135982417910455ULL;
int var_17 = -1502004121;
int zero = 0;
unsigned int var_19 = 1191337897U;
long long int var_20 = 7964036529311338425LL;
signed char var_21 = (signed char)126;
long long int var_22 = -1482242243322853445LL;
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
