#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8647612947637176341ULL;
signed char var_3 = (signed char)46;
unsigned char var_4 = (unsigned char)64;
unsigned short var_6 = (unsigned short)47904;
unsigned short var_9 = (unsigned short)24592;
unsigned char var_10 = (unsigned char)2;
unsigned long long int var_13 = 10388698333937190596ULL;
unsigned int var_17 = 4169330354U;
int zero = 0;
signed char var_18 = (signed char)-127;
long long int var_19 = -1103308910388997241LL;
unsigned long long int var_20 = 4281858043359251036ULL;
_Bool var_21 = (_Bool)0;
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
