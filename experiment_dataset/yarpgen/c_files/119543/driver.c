#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2023260297;
signed char var_2 = (signed char)-54;
unsigned short var_5 = (unsigned short)26380;
signed char var_6 = (signed char)34;
unsigned short var_11 = (unsigned short)28070;
short var_13 = (short)-28148;
int zero = 0;
unsigned long long int var_16 = 3369313472321047306ULL;
long long int var_17 = -8557193166880133398LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
