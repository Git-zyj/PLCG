#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)22201;
unsigned short var_3 = (unsigned short)27163;
unsigned short var_5 = (unsigned short)33777;
short var_6 = (short)-14476;
unsigned int var_9 = 2519117043U;
long long int var_12 = 8683828251556355044LL;
int zero = 0;
int var_14 = 1394501057;
signed char var_15 = (signed char)-89;
unsigned long long int var_16 = 6984250978179482473ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
