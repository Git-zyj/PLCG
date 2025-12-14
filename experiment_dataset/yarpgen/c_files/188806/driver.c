#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 728310940846664147LL;
int var_3 = 1644161803;
unsigned long long int var_4 = 9849594385141299462ULL;
signed char var_9 = (signed char)-80;
signed char var_11 = (signed char)-43;
unsigned char var_12 = (unsigned char)40;
unsigned short var_16 = (unsigned short)17546;
long long int var_18 = -1637928030369323220LL;
signed char var_19 = (signed char)-80;
int zero = 0;
short var_20 = (short)-23682;
int var_21 = 1233247876;
void init() {
}

void checksum() {
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
