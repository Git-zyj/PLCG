#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1679541402;
int var_3 = -1799687467;
signed char var_4 = (signed char)41;
unsigned short var_7 = (unsigned short)57285;
_Bool var_8 = (_Bool)1;
int var_9 = -569501035;
int zero = 0;
unsigned long long int var_11 = 4730037432455046591ULL;
unsigned int var_12 = 2659144719U;
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
