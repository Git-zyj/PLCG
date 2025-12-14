#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)195;
long long int var_4 = 5292316583562376905LL;
unsigned int var_5 = 2253753023U;
long long int var_6 = -6773574485305561161LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_12 = 10684738320761421408ULL;
long long int var_15 = -3825556040807841055LL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)230;
signed char var_19 = (signed char)-39;
int zero = 0;
unsigned char var_20 = (unsigned char)161;
unsigned char var_21 = (unsigned char)109;
unsigned char var_22 = (unsigned char)10;
void init() {
}

void checksum() {
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
