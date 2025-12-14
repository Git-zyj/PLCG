#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)57;
signed char var_2 = (signed char)36;
unsigned char var_3 = (unsigned char)126;
int var_5 = 1041952583;
int var_11 = -357605839;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 3956711291U;
long long int var_19 = -1487185073374243603LL;
unsigned char var_20 = (unsigned char)238;
long long int var_21 = 8843187224767780068LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
