#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8459373961221550276LL;
unsigned char var_2 = (unsigned char)18;
int var_5 = 210865864;
unsigned char var_6 = (unsigned char)183;
unsigned short var_8 = (unsigned short)46683;
long long int var_9 = 4899647119125946743LL;
unsigned int var_11 = 3713921575U;
signed char var_13 = (signed char)-126;
int zero = 0;
long long int var_14 = 8686093443138663769LL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)27617;
int var_17 = -971183541;
unsigned int var_18 = 1885975610U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
