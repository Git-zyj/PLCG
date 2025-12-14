#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -761076513;
int var_7 = 498205745;
short var_8 = (short)-8706;
int var_9 = 297399058;
long long int var_15 = -7374669594761850199LL;
int zero = 0;
int var_19 = 1399107282;
long long int var_20 = -5516914137277800989LL;
unsigned char var_21 = (unsigned char)154;
int var_22 = 2058800951;
unsigned long long int var_23 = 7814798920428961002ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
