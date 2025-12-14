#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7926445877597174622LL;
unsigned long long int var_2 = 2165924003804896994ULL;
unsigned char var_3 = (unsigned char)174;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-110;
long long int var_9 = -4265340715423029162LL;
short var_12 = (short)25906;
unsigned short var_16 = (unsigned short)44846;
int zero = 0;
int var_17 = -1735811153;
unsigned short var_18 = (unsigned short)17136;
signed char var_19 = (signed char)113;
long long int var_20 = -860129438413637488LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
