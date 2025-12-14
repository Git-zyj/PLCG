#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-104;
signed char var_2 = (signed char)-77;
short var_4 = (short)-3248;
int var_7 = -123749211;
unsigned int var_8 = 501097399U;
short var_9 = (short)-7883;
int zero = 0;
long long int var_10 = -5191327128286266823LL;
long long int var_11 = -5009924336193274277LL;
long long int var_12 = -8393351068070198083LL;
unsigned short var_13 = (unsigned short)23570;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
