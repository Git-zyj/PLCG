#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 1603771214977711753ULL;
unsigned long long int var_6 = 12283856833036678698ULL;
unsigned long long int var_7 = 14427384701338705889ULL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 8321708770986527611ULL;
unsigned short var_12 = (unsigned short)55240;
int zero = 0;
unsigned long long int var_13 = 3281419863184060280ULL;
signed char var_14 = (signed char)-11;
long long int var_15 = -4219475467928584656LL;
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
