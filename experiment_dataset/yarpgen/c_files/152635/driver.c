#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
unsigned char var_2 = (unsigned char)33;
int var_3 = -526303010;
unsigned char var_4 = (unsigned char)115;
long long int var_5 = 3818430107882096604LL;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 2546178364U;
int zero = 0;
unsigned char var_12 = (unsigned char)121;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
