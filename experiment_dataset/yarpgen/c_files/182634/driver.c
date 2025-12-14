#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4070712979438747799LL;
long long int var_3 = 5976367505287081472LL;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)68;
signed char var_8 = (signed char)-59;
unsigned long long int var_9 = 8499952579715532869ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 15896013919910818142ULL;
unsigned short var_13 = (unsigned short)1591;
unsigned char var_14 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
