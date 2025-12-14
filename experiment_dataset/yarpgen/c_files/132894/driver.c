#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-73;
signed char var_2 = (signed char)(-127 - 1);
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)19676;
long long int var_6 = -354537736497641363LL;
signed char var_7 = (signed char)-89;
unsigned int var_9 = 1061121520U;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)65;
unsigned long long int var_12 = 17779197304675039412ULL;
unsigned char var_13 = (unsigned char)9;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
