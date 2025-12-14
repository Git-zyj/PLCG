#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15854;
unsigned long long int var_4 = 17695762040997843114ULL;
unsigned long long int var_7 = 7564713649177668632ULL;
long long int var_9 = 3836726774024428465LL;
short var_13 = (short)-6206;
unsigned short var_15 = (unsigned short)57584;
int zero = 0;
short var_18 = (short)-4237;
short var_19 = (short)-8424;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2703605899U;
unsigned long long int var_22 = 18319909630738351995ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
