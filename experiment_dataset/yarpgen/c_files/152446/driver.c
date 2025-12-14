#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63184;
signed char var_2 = (signed char)65;
unsigned char var_3 = (unsigned char)217;
long long int var_4 = 7030807728338046869LL;
unsigned long long int var_5 = 13914010312470605747ULL;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)127;
int zero = 0;
unsigned short var_11 = (unsigned short)39279;
signed char var_12 = (signed char)41;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
