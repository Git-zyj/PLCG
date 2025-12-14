#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-28897;
unsigned int var_4 = 225471623U;
unsigned short var_6 = (unsigned short)49511;
unsigned char var_7 = (unsigned char)186;
unsigned short var_8 = (unsigned short)1296;
_Bool var_9 = (_Bool)0;
signed char var_19 = (signed char)-14;
int zero = 0;
unsigned long long int var_20 = 10388941743188738089ULL;
long long int var_21 = -1328785373844917532LL;
long long int var_22 = 7621321039430965196LL;
signed char var_23 = (signed char)-8;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
