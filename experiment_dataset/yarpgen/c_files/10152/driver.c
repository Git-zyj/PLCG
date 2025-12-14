#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1545086527;
int var_1 = -721373649;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)98;
unsigned char var_4 = (unsigned char)57;
unsigned char var_6 = (unsigned char)53;
unsigned long long int var_9 = 17468547862344472746ULL;
int zero = 0;
int var_10 = -888339699;
unsigned long long int var_11 = 9341963231587453092ULL;
int var_12 = -2134475627;
unsigned char var_13 = (unsigned char)0;
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
