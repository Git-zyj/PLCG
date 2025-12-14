#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8445961567272177859LL;
unsigned long long int var_4 = 16852665102239388772ULL;
signed char var_6 = (signed char)102;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = 1549662001;
unsigned char var_11 = (unsigned char)199;
signed char var_12 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
