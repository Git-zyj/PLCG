#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13035;
unsigned short var_2 = (unsigned short)26743;
long long int var_4 = 796586078250500343LL;
signed char var_6 = (signed char)-113;
unsigned short var_9 = (unsigned short)26268;
unsigned long long int var_12 = 13078204976165550194ULL;
signed char var_14 = (signed char)23;
int zero = 0;
short var_19 = (short)20690;
long long int var_20 = 2919364085990837606LL;
void init() {
}

void checksum() {
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
