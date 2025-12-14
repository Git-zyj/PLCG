#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 917201776U;
short var_7 = (short)18542;
int var_8 = -2091260945;
unsigned short var_9 = (unsigned short)23553;
unsigned int var_10 = 1908462578U;
_Bool var_11 = (_Bool)0;
long long int var_12 = -7981662259320336526LL;
long long int var_13 = 1895881403722888553LL;
long long int var_16 = 5649247776232121551LL;
int zero = 0;
unsigned long long int var_19 = 8630387955135388283ULL;
long long int var_20 = -4960786814965588348LL;
unsigned char var_21 = (unsigned char)46;
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
