#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7636720864698942924ULL;
int var_1 = -445151660;
short var_2 = (short)-27551;
unsigned short var_3 = (unsigned short)41363;
short var_4 = (short)7481;
int var_6 = -1983825334;
_Bool var_7 = (_Bool)0;
short var_8 = (short)47;
long long int var_9 = 4026952445356265443LL;
int zero = 0;
signed char var_10 = (signed char)-67;
signed char var_11 = (signed char)-53;
signed char var_12 = (signed char)19;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-24;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
