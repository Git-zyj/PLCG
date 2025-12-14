#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)77;
unsigned char var_2 = (unsigned char)154;
unsigned char var_3 = (unsigned char)221;
_Bool var_5 = (_Bool)1;
long long int var_9 = -2990209048678350825LL;
int zero = 0;
unsigned short var_10 = (unsigned short)3328;
long long int var_11 = 9163554935340597088LL;
unsigned short var_12 = (unsigned short)28567;
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
