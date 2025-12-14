#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
signed char var_1 = (signed char)-62;
unsigned long long int var_2 = 3918754981741620552ULL;
unsigned int var_3 = 1867652535U;
unsigned short var_4 = (unsigned short)2385;
unsigned long long int var_7 = 11321604820877785066ULL;
unsigned short var_10 = (unsigned short)46547;
int var_12 = -1138108565;
int zero = 0;
unsigned long long int var_13 = 5939751191513623408ULL;
unsigned long long int var_14 = 2687494895028039146ULL;
signed char var_15 = (signed char)21;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 4298368940304357613ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
