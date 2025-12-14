#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3658041958U;
unsigned int var_3 = 2230007792U;
unsigned short var_4 = (unsigned short)60678;
unsigned int var_6 = 815592126U;
unsigned short var_8 = (unsigned short)49194;
_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)53022;
unsigned int var_13 = 2845210818U;
int zero = 0;
unsigned int var_17 = 995263987U;
signed char var_18 = (signed char)87;
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
