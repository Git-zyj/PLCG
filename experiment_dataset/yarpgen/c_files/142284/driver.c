#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16238;
unsigned long long int var_1 = 3396458353289371683ULL;
unsigned short var_2 = (unsigned short)59931;
unsigned long long int var_3 = 13443793680344346401ULL;
signed char var_4 = (signed char)-72;
unsigned long long int var_5 = 306844995452733459ULL;
unsigned long long int var_6 = 4381085989322944408ULL;
unsigned int var_7 = 1804993759U;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 509507008U;
signed char var_11 = (signed char)107;
unsigned short var_12 = (unsigned short)6694;
long long int var_13 = -6341959026691236514LL;
unsigned short var_14 = (unsigned short)8428;
int zero = 0;
unsigned short var_16 = (unsigned short)23331;
unsigned long long int var_17 = 7999674515576326366ULL;
unsigned long long int var_18 = 9146439607462254273ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
