#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14691125791433005349ULL;
unsigned long long int var_6 = 3330988162836650355ULL;
unsigned long long int var_8 = 3447750984357281481ULL;
short var_9 = (short)13256;
long long int var_10 = -3419242226147764357LL;
int zero = 0;
signed char var_19 = (signed char)-37;
unsigned long long int var_20 = 14550599346653385223ULL;
signed char var_21 = (signed char)4;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
