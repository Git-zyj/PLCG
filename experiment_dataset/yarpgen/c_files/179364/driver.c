#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11629;
long long int var_2 = -5415413230071612839LL;
unsigned char var_5 = (unsigned char)235;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)-10;
signed char var_12 = (signed char)-120;
int zero = 0;
short var_13 = (short)-25194;
unsigned char var_14 = (unsigned char)57;
void init() {
}

void checksum() {
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
