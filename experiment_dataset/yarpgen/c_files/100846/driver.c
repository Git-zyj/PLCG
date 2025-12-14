#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12936982461026146401ULL;
unsigned char var_2 = (unsigned char)48;
long long int var_3 = 8853167704356954894LL;
unsigned long long int var_4 = 1637501195420033436ULL;
unsigned short var_5 = (unsigned short)41300;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)20;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)10078;
unsigned long long int var_13 = 6386067968077958907ULL;
signed char var_14 = (signed char)-30;
_Bool var_15 = (_Bool)0;
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
