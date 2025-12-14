#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4557873484162731585LL;
int var_4 = 1072063905;
long long int var_10 = 8885979010312566413LL;
short var_12 = (short)25788;
long long int var_13 = 512225823146005732LL;
int var_14 = 921566301;
unsigned long long int var_16 = 17209047908634581619ULL;
signed char var_17 = (signed char)-2;
int zero = 0;
signed char var_20 = (signed char)122;
unsigned short var_21 = (unsigned short)63486;
signed char var_22 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
