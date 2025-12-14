#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-27;
unsigned short var_4 = (unsigned short)17801;
signed char var_5 = (signed char)-35;
_Bool var_6 = (_Bool)1;
long long int var_8 = 4579170022017605501LL;
unsigned long long int var_9 = 4851646434497543620ULL;
unsigned char var_12 = (unsigned char)75;
int zero = 0;
unsigned short var_13 = (unsigned short)23152;
unsigned char var_14 = (unsigned char)91;
unsigned short var_15 = (unsigned short)3947;
int var_16 = -179251264;
unsigned long long int var_17 = 15037448753619247075ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
