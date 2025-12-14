#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-8;
int var_3 = -567234868;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)22492;
long long int var_8 = -6980392916714673029LL;
int zero = 0;
unsigned char var_13 = (unsigned char)233;
long long int var_14 = -3029962423825451637LL;
unsigned long long int var_15 = 3738102144569314696ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
