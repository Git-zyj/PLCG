#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-90;
signed char var_1 = (signed char)2;
int var_2 = 1196162038;
unsigned short var_3 = (unsigned short)16695;
int var_4 = -1277750430;
int var_5 = 1318816672;
short var_6 = (short)14800;
unsigned short var_8 = (unsigned short)13631;
unsigned long long int var_9 = 16984875119372752716ULL;
int zero = 0;
signed char var_10 = (signed char)-40;
signed char var_11 = (signed char)-36;
unsigned char var_12 = (unsigned char)224;
int var_13 = 2090361519;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
