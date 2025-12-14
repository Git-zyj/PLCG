#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7929037618180745996LL;
unsigned short var_3 = (unsigned short)26261;
long long int var_7 = -9093170725798008333LL;
unsigned short var_8 = (unsigned short)40572;
signed char var_10 = (signed char)35;
signed char var_12 = (signed char)-63;
int zero = 0;
signed char var_14 = (signed char)105;
signed char var_15 = (signed char)-39;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
