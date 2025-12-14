#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2973153782246296130LL;
long long int var_4 = 1049190689261062774LL;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-26;
int zero = 0;
unsigned short var_19 = (unsigned short)45458;
long long int var_20 = -8271978297377965659LL;
unsigned short var_21 = (unsigned short)3710;
void init() {
}

void checksum() {
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
