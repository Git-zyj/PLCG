#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1536940588900460028LL;
int var_1 = 166292090;
_Bool var_2 = (_Bool)0;
short var_4 = (short)25684;
unsigned char var_5 = (unsigned char)90;
unsigned short var_11 = (unsigned short)20658;
unsigned char var_12 = (unsigned char)254;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 8946148515544669413LL;
_Bool var_15 = (_Bool)0;
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
