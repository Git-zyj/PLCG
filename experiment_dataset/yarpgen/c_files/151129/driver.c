#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2557000224118065332LL;
_Bool var_1 = (_Bool)0;
long long int var_5 = -1299765965123242934LL;
unsigned short var_7 = (unsigned short)252;
unsigned char var_8 = (unsigned char)226;
signed char var_9 = (signed char)-47;
long long int var_11 = 7313640792944265120LL;
long long int var_12 = 6212893771927352173LL;
signed char var_13 = (signed char)118;
signed char var_14 = (signed char)-14;
int zero = 0;
unsigned int var_17 = 3217879139U;
unsigned short var_18 = (unsigned short)48338;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
