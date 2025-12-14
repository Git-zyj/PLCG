#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)100;
unsigned int var_3 = 683768293U;
signed char var_5 = (signed char)28;
unsigned int var_6 = 409402597U;
unsigned char var_7 = (unsigned char)29;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)-78;
long long int var_12 = -6902663950749922046LL;
long long int var_13 = -3976051154304665936LL;
int zero = 0;
signed char var_14 = (signed char)111;
unsigned int var_15 = 2240613455U;
signed char var_16 = (signed char)-72;
unsigned long long int var_17 = 3236830253227285578ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
