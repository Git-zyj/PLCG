#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10441;
long long int var_4 = 4084537844245143350LL;
long long int var_6 = 8628717271504894316LL;
unsigned short var_7 = (unsigned short)34617;
_Bool var_8 = (_Bool)1;
unsigned int var_12 = 420686828U;
unsigned int var_16 = 2287800409U;
signed char var_17 = (signed char)-108;
int zero = 0;
signed char var_18 = (signed char)-28;
signed char var_19 = (signed char)-91;
unsigned int var_20 = 3859683433U;
unsigned char var_21 = (unsigned char)246;
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
