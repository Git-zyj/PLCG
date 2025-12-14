#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1717041633686374859LL;
unsigned short var_5 = (unsigned short)12244;
int var_6 = 587844204;
unsigned char var_8 = (unsigned char)119;
unsigned char var_9 = (unsigned char)170;
unsigned char var_11 = (unsigned char)188;
_Bool var_12 = (_Bool)0;
unsigned char var_15 = (unsigned char)203;
long long int var_17 = 485554259616663591LL;
signed char var_18 = (signed char)48;
int zero = 0;
unsigned int var_20 = 420724565U;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)33614;
unsigned long long int var_23 = 4271607535645206508ULL;
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
