#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-104;
unsigned long long int var_3 = 5404610308591025336ULL;
short var_7 = (short)-29153;
signed char var_9 = (signed char)67;
int var_12 = -1343682955;
unsigned char var_14 = (unsigned char)186;
short var_16 = (short)16769;
int var_17 = -763809791;
int zero = 0;
unsigned long long int var_19 = 18307010411836509743ULL;
unsigned short var_20 = (unsigned short)57114;
int var_21 = -1402984543;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
