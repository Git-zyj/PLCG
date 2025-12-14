#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2031862194570144965LL;
signed char var_2 = (signed char)-57;
short var_5 = (short)10637;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 8247867309296649779ULL;
unsigned long long int var_15 = 12151819128373210678ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
