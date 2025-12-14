#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18900;
unsigned short var_4 = (unsigned short)49181;
unsigned char var_7 = (unsigned char)41;
signed char var_8 = (signed char)73;
unsigned long long int var_9 = 9412202953311118275ULL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_16 = 18214483802398410244ULL;
int zero = 0;
short var_17 = (short)-24545;
short var_18 = (short)15042;
unsigned char var_19 = (unsigned char)35;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
