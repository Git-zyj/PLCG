#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 13455688072808013168ULL;
unsigned long long int var_7 = 4011062767140794723ULL;
unsigned int var_9 = 3584115970U;
long long int var_11 = 3988075912749279444LL;
unsigned long long int var_13 = 10944410026942536841ULL;
unsigned int var_14 = 2681919074U;
unsigned int var_16 = 3947733636U;
unsigned char var_18 = (unsigned char)75;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 12708899642763287330ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
