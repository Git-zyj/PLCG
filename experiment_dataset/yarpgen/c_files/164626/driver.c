#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1313474993;
_Bool var_1 = (_Bool)0;
long long int var_4 = -2334107240735535389LL;
unsigned short var_8 = (unsigned short)49669;
unsigned short var_9 = (unsigned short)1339;
int zero = 0;
long long int var_11 = 8641499908235091202LL;
unsigned long long int var_12 = 45002555924531428ULL;
long long int var_13 = -2954428391096771961LL;
long long int var_14 = 4575860048049602973LL;
void init() {
}

void checksum() {
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
