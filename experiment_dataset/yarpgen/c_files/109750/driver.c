#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 894900891U;
unsigned long long int var_6 = 11764484360718980025ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)130;
unsigned long long int var_10 = 6412355186610849612ULL;
int zero = 0;
long long int var_12 = -4427483960135906720LL;
signed char var_13 = (signed char)98;
signed char var_14 = (signed char)-1;
unsigned short var_15 = (unsigned short)43892;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
