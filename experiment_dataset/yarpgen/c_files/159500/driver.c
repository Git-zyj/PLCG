#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)68;
unsigned long long int var_1 = 7773158871896238021ULL;
short var_2 = (short)22410;
int var_3 = 1608156766;
unsigned long long int var_4 = 17321531650454181476ULL;
unsigned short var_5 = (unsigned short)10230;
int var_7 = 1739674185;
unsigned int var_8 = 3231955850U;
unsigned char var_10 = (unsigned char)7;
short var_12 = (short)32103;
unsigned short var_14 = (unsigned short)41350;
unsigned long long int var_15 = 8678815275979315175ULL;
int zero = 0;
signed char var_16 = (signed char)25;
int var_17 = -1913394087;
int var_18 = -1352076822;
long long int var_19 = 6310045571437837057LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
