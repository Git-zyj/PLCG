#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-1;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-18705;
unsigned char var_3 = (unsigned char)252;
int var_4 = -976217990;
unsigned short var_5 = (unsigned short)5684;
unsigned int var_8 = 3971129861U;
unsigned long long int var_9 = 726753458643443475ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 3695431816862074506LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
