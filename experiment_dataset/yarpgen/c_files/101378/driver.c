#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)85;
unsigned char var_1 = (unsigned char)241;
int var_2 = 1307344674;
signed char var_3 = (signed char)-72;
unsigned long long int var_6 = 9765216050104915068ULL;
signed char var_7 = (signed char)-58;
short var_11 = (short)-18117;
long long int var_12 = -4223776827177172687LL;
short var_13 = (short)10925;
int zero = 0;
long long int var_15 = 3623419004327438830LL;
signed char var_16 = (signed char)66;
unsigned short var_17 = (unsigned short)27774;
unsigned short var_18 = (unsigned short)11160;
void init() {
}

void checksum() {
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
