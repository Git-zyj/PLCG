#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-116;
long long int var_2 = 974508063273659876LL;
unsigned short var_4 = (unsigned short)26697;
signed char var_8 = (signed char)-77;
_Bool var_9 = (_Bool)1;
long long int var_11 = 5595020082591633507LL;
short var_12 = (short)-24611;
long long int var_14 = -3631699735485749671LL;
int zero = 0;
unsigned char var_19 = (unsigned char)35;
signed char var_20 = (signed char)-41;
_Bool var_21 = (_Bool)1;
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
