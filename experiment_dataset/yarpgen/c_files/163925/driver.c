#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-41;
signed char var_4 = (signed char)2;
unsigned short var_9 = (unsigned short)19839;
signed char var_10 = (signed char)-115;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)42894;
long long int var_16 = -4231553333736443406LL;
int zero = 0;
unsigned short var_18 = (unsigned short)53503;
unsigned int var_19 = 1487612062U;
signed char var_20 = (signed char)59;
unsigned int var_21 = 628080311U;
long long int var_22 = -4150068348896003090LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
