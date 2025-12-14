#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26753;
unsigned int var_1 = 2430641949U;
int var_2 = -1805136261;
short var_3 = (short)-10904;
int var_4 = 271853645;
unsigned short var_5 = (unsigned short)12237;
signed char var_9 = (signed char)93;
int zero = 0;
unsigned long long int var_12 = 10819192970019114309ULL;
long long int var_13 = 7084672453692242881LL;
signed char var_14 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
