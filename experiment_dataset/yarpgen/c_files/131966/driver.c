#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4729623191221212503ULL;
unsigned short var_1 = (unsigned short)32013;
signed char var_4 = (signed char)-45;
signed char var_6 = (signed char)-16;
signed char var_12 = (signed char)-111;
long long int var_13 = -5640066398203216256LL;
int var_17 = -610927209;
unsigned char var_19 = (unsigned char)27;
int zero = 0;
unsigned int var_20 = 3466920348U;
short var_21 = (short)23863;
unsigned long long int var_22 = 16994196596838315718ULL;
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
