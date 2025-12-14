#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1521702425U;
unsigned long long int var_4 = 4303186423454980109ULL;
short var_8 = (short)-27995;
unsigned int var_9 = 994892867U;
unsigned long long int var_15 = 14167508980715779468ULL;
unsigned int var_19 = 288006502U;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)81;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
