#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 1537277342080230375LL;
long long int var_3 = 3797476403884496257LL;
unsigned short var_6 = (unsigned short)64894;
signed char var_7 = (signed char)-58;
unsigned char var_9 = (unsigned char)96;
int zero = 0;
short var_11 = (short)28157;
long long int var_12 = 3861932841971120355LL;
unsigned long long int var_13 = 17687288658432989547ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
