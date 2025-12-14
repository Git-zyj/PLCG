#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2344257871U;
unsigned short var_3 = (unsigned short)3953;
unsigned long long int var_4 = 7684268116758688061ULL;
unsigned long long int var_6 = 6735685956146049233ULL;
short var_9 = (short)-24325;
unsigned short var_14 = (unsigned short)13664;
signed char var_16 = (signed char)123;
int zero = 0;
unsigned int var_19 = 301989433U;
signed char var_20 = (signed char)-49;
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
