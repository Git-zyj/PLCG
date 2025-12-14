#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13990;
long long int var_2 = -1497988921570726815LL;
int var_5 = -1325610341;
int var_6 = 2031604324;
long long int var_9 = -1085636761983874182LL;
short var_11 = (short)11212;
int zero = 0;
long long int var_13 = 7282620834068001343LL;
long long int var_14 = -7432822224675708809LL;
void init() {
}

void checksum() {
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
