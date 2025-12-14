#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1123337353758301732ULL;
unsigned long long int var_1 = 3665976106033738076ULL;
signed char var_3 = (signed char)52;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)65261;
int zero = 0;
unsigned long long int var_20 = 13895488219837007102ULL;
long long int var_21 = -3239709925720921230LL;
unsigned char var_22 = (unsigned char)116;
unsigned char var_23 = (unsigned char)145;
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
