#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -72799730;
short var_1 = (short)21794;
signed char var_6 = (signed char)-90;
unsigned int var_7 = 167979521U;
long long int var_8 = -1492423224956741447LL;
int var_9 = 286141885;
long long int var_11 = -4730930670480266679LL;
int zero = 0;
long long int var_12 = -5726589928562110743LL;
signed char var_13 = (signed char)-118;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)56847;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
