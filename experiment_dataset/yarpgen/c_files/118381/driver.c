#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
long long int var_2 = -2529503612555924296LL;
unsigned char var_5 = (unsigned char)163;
unsigned char var_7 = (unsigned char)221;
unsigned short var_10 = (unsigned short)60013;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_17 = 6353198314995121293LL;
unsigned long long int var_18 = 3232920380666810709ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
