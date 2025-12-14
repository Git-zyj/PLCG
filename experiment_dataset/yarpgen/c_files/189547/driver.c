#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26599;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 2235254709311288387ULL;
long long int var_9 = -6067051327529311897LL;
short var_11 = (short)19864;
signed char var_13 = (signed char)-64;
unsigned char var_16 = (unsigned char)57;
int zero = 0;
int var_17 = -1031834519;
int var_18 = -387723063;
unsigned int var_19 = 1252915186U;
unsigned int var_20 = 230125598U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
