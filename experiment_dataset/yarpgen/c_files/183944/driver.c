#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -4159459168555293584LL;
unsigned char var_2 = (unsigned char)39;
long long int var_3 = -4019635657810629809LL;
short var_4 = (short)16637;
unsigned long long int var_5 = 15228766358782931424ULL;
unsigned short var_6 = (unsigned short)22513;
unsigned char var_7 = (unsigned char)145;
unsigned char var_10 = (unsigned char)204;
int zero = 0;
unsigned char var_11 = (unsigned char)229;
unsigned long long int var_12 = 4184573841127905495ULL;
signed char var_13 = (signed char)-86;
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
