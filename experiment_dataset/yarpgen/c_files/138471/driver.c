#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-15177;
long long int var_4 = 1263463202953108787LL;
unsigned long long int var_5 = 3693499338303236888ULL;
long long int var_6 = 2922021140572169644LL;
unsigned int var_7 = 3428243574U;
unsigned char var_10 = (unsigned char)220;
unsigned long long int var_11 = 6455104015495311569ULL;
signed char var_12 = (signed char)-115;
int zero = 0;
long long int var_13 = 7679027885436880931LL;
_Bool var_14 = (_Bool)0;
int var_15 = 193076819;
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
