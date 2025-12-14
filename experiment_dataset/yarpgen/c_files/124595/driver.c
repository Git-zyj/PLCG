#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)28159;
long long int var_6 = 4208818536539603154LL;
long long int var_9 = 7100766296035036537LL;
int zero = 0;
long long int var_10 = 2689581336722326103LL;
int var_11 = -310372519;
unsigned int var_12 = 3045063711U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
