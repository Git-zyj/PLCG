#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)217;
long long int var_1 = -8348027649747490926LL;
unsigned long long int var_3 = 6302579554581126622ULL;
unsigned char var_4 = (unsigned char)38;
short var_5 = (short)-2353;
unsigned long long int var_6 = 15813774600261517083ULL;
int var_8 = -396213998;
int zero = 0;
short var_10 = (short)-24035;
signed char var_11 = (signed char)105;
short var_12 = (short)29978;
unsigned char var_13 = (unsigned char)54;
int var_14 = -1954908439;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
