#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2579455101U;
unsigned short var_6 = (unsigned short)3481;
unsigned char var_8 = (unsigned char)157;
unsigned char var_10 = (unsigned char)18;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 12026236353485442726ULL;
int zero = 0;
signed char var_18 = (signed char)-27;
short var_19 = (short)9895;
unsigned char var_20 = (unsigned char)216;
unsigned short var_21 = (unsigned short)8468;
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
