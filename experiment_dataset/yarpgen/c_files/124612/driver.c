#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4426515049455230201ULL;
short var_1 = (short)-31859;
signed char var_2 = (signed char)114;
long long int var_3 = -2226904450242744941LL;
unsigned long long int var_4 = 1436380304341083751ULL;
short var_5 = (short)-4034;
unsigned char var_6 = (unsigned char)140;
unsigned long long int var_7 = 1496061411773855545ULL;
unsigned char var_8 = (unsigned char)28;
unsigned short var_9 = (unsigned short)46031;
signed char var_11 = (signed char)-27;
int zero = 0;
signed char var_12 = (signed char)-116;
unsigned short var_13 = (unsigned short)59905;
unsigned char var_14 = (unsigned char)112;
unsigned char var_15 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
