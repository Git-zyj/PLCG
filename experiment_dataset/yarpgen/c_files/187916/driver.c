#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35035;
_Bool var_1 = (_Bool)1;
int var_6 = 2131318436;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)368;
short var_11 = (short)18752;
long long int var_13 = 3391393067484949896LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-9260;
short var_17 = (short)-3401;
void init() {
}

void checksum() {
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
