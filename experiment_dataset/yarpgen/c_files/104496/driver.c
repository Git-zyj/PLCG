#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)26;
_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 7206496202377137399ULL;
signed char var_6 = (signed char)13;
unsigned char var_7 = (unsigned char)121;
int var_9 = 301578040;
int zero = 0;
unsigned short var_10 = (unsigned short)11071;
unsigned char var_11 = (unsigned char)226;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
