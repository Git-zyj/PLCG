#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1847138217211935995LL;
signed char var_1 = (signed char)-21;
short var_2 = (short)15006;
unsigned long long int var_4 = 8390359218178979647ULL;
unsigned char var_6 = (unsigned char)4;
unsigned short var_7 = (unsigned short)7035;
unsigned char var_9 = (unsigned char)2;
short var_10 = (short)-26953;
int var_11 = 912108326;
long long int var_16 = -4257321159802848292LL;
int zero = 0;
long long int var_18 = 5249227331095076242LL;
unsigned short var_19 = (unsigned short)22147;
unsigned short var_20 = (unsigned short)34608;
short var_21 = (short)-2122;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
