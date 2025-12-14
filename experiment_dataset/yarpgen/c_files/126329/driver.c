#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2053103477;
unsigned long long int var_1 = 5706090753860225143ULL;
unsigned int var_3 = 3205527231U;
long long int var_4 = -6026369317484949332LL;
unsigned short var_5 = (unsigned short)45380;
_Bool var_6 = (_Bool)0;
int var_10 = 2022668572;
unsigned long long int var_11 = 325516035396233105ULL;
unsigned int var_12 = 3155935983U;
unsigned long long int var_14 = 8105038875227638487ULL;
signed char var_15 = (signed char)-8;
long long int var_17 = -4040653018865708095LL;
int zero = 0;
int var_18 = -374550808;
short var_19 = (short)-32550;
unsigned char var_20 = (unsigned char)16;
short var_21 = (short)-1541;
short var_22 = (short)-28813;
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
