#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)46;
unsigned long long int var_8 = 12925386223202284879ULL;
unsigned short var_13 = (unsigned short)52471;
long long int var_16 = 8590955793269135099LL;
int zero = 0;
unsigned int var_18 = 2265072067U;
_Bool var_19 = (_Bool)1;
long long int var_20 = -3391396793725198087LL;
long long int var_21 = 5136795347485276995LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
