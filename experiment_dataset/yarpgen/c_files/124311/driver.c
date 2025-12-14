#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_3 = -3963416124956458500LL;
unsigned long long int var_4 = 6237295511277004913ULL;
unsigned short var_9 = (unsigned short)62827;
unsigned int var_10 = 2224821832U;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 8288451839343197688ULL;
short var_21 = (short)-24294;
unsigned long long int var_22 = 2745933440077869043ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
