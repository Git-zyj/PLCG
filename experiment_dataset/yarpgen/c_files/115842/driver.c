#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)108;
int var_3 = -1327021424;
unsigned char var_4 = (unsigned char)183;
unsigned char var_5 = (unsigned char)104;
int var_6 = -729007268;
unsigned int var_8 = 4069193908U;
unsigned short var_10 = (unsigned short)47413;
int zero = 0;
long long int var_11 = -414214511588510474LL;
signed char var_12 = (signed char)-11;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2193078643U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
