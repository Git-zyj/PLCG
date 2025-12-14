#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1374098097;
short var_4 = (short)-18626;
unsigned long long int var_7 = 10166193370747409085ULL;
unsigned char var_8 = (unsigned char)181;
int var_9 = -1372060065;
unsigned char var_10 = (unsigned char)140;
unsigned short var_16 = (unsigned short)38564;
unsigned long long int var_17 = 731793869191184081ULL;
short var_18 = (short)-9887;
unsigned short var_19 = (unsigned short)50753;
int zero = 0;
unsigned long long int var_20 = 17368977752291000085ULL;
unsigned long long int var_21 = 11255823579770253151ULL;
int var_22 = 1520332688;
unsigned long long int var_23 = 1452791516283797329ULL;
unsigned long long int var_24 = 1614519064545016267ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
