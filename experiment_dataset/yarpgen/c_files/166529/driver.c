#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)66;
int var_1 = 476956929;
unsigned char var_2 = (unsigned char)94;
signed char var_4 = (signed char)83;
int var_7 = -929512787;
short var_11 = (short)31986;
signed char var_12 = (signed char)-59;
int zero = 0;
long long int var_18 = -3471934472723271017LL;
long long int var_19 = 6577881267145757329LL;
short var_20 = (short)-4554;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
