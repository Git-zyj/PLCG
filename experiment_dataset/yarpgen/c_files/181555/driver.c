#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
unsigned short var_2 = (unsigned short)25387;
unsigned long long int var_5 = 11848847296651774628ULL;
signed char var_7 = (signed char)24;
unsigned char var_8 = (unsigned char)208;
unsigned char var_9 = (unsigned char)81;
signed char var_12 = (signed char)-87;
unsigned long long int var_13 = 4633118830209392368ULL;
int var_14 = -565655107;
long long int var_15 = 6689585892505124337LL;
int zero = 0;
int var_16 = 1142711112;
short var_17 = (short)-4863;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3098031031U;
unsigned char var_20 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
