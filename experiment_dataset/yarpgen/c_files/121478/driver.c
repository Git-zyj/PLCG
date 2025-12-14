#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)15268;
unsigned char var_6 = (unsigned char)217;
short var_13 = (short)31356;
unsigned short var_14 = (unsigned short)14791;
unsigned long long int var_15 = 2004823383607344427ULL;
unsigned short var_17 = (unsigned short)59542;
int zero = 0;
long long int var_18 = -7241815865737760102LL;
unsigned short var_19 = (unsigned short)1473;
unsigned char var_20 = (unsigned char)162;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3490416633U;
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
