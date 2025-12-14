#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 843273935419032882ULL;
long long int var_8 = -5975707707058464472LL;
unsigned long long int var_9 = 10051052991792389269ULL;
_Bool var_10 = (_Bool)1;
long long int var_13 = 3996526237396165593LL;
unsigned char var_14 = (unsigned char)82;
int zero = 0;
unsigned long long int var_18 = 6736238198155541086ULL;
long long int var_19 = 6696194140145243447LL;
unsigned long long int var_20 = 12631550330107023597ULL;
long long int var_21 = -236631970520846464LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
