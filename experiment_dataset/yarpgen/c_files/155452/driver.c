#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3707147426U;
unsigned short var_1 = (unsigned short)51467;
signed char var_2 = (signed char)-102;
long long int var_3 = 7518944925010398416LL;
unsigned int var_5 = 2520442505U;
unsigned long long int var_6 = 17396950961409255948ULL;
unsigned int var_7 = 2771097956U;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_10 = -8933981002926327344LL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 4521089006875006376ULL;
int var_13 = 323666481;
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
