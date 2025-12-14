#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35142;
unsigned int var_2 = 3908568050U;
long long int var_5 = 4904075563082171250LL;
signed char var_6 = (signed char)-85;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)60228;
unsigned int var_11 = 3426535535U;
int zero = 0;
signed char var_17 = (signed char)56;
long long int var_18 = -881863931016268347LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
