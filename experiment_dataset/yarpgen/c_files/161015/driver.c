#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4132981786U;
unsigned int var_2 = 656536443U;
unsigned char var_3 = (unsigned char)0;
signed char var_4 = (signed char)-5;
unsigned char var_5 = (unsigned char)114;
int var_7 = -604514245;
signed char var_8 = (signed char)2;
unsigned long long int var_9 = 15629429709479258710ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 157550513U;
unsigned char var_14 = (unsigned char)138;
long long int var_15 = 5043359012765440335LL;
unsigned long long int var_16 = 12996690540403881272ULL;
long long int var_17 = 2990667132618933925LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
