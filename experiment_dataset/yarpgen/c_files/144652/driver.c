#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2277415313645082984LL;
signed char var_1 = (signed char)-31;
long long int var_4 = 3616949307547729178LL;
long long int var_6 = -1192618433364534585LL;
short var_17 = (short)22262;
int zero = 0;
unsigned short var_18 = (unsigned short)25856;
long long int var_19 = 4497159715525793036LL;
int var_20 = -599362514;
long long int var_21 = 3117807903247413356LL;
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
