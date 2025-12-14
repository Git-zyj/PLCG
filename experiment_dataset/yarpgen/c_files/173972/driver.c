#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1293427962051106210LL;
int var_1 = -310509483;
long long int var_2 = -3256884937717363641LL;
int var_3 = -66693580;
signed char var_4 = (signed char)-120;
unsigned char var_5 = (unsigned char)151;
unsigned long long int var_6 = 9049307923476905904ULL;
_Bool var_7 = (_Bool)0;
short var_8 = (short)21842;
signed char var_9 = (signed char)-61;
signed char var_10 = (signed char)108;
unsigned char var_11 = (unsigned char)92;
long long int var_12 = 2548859065588584563LL;
unsigned char var_13 = (unsigned char)92;
int zero = 0;
unsigned char var_14 = (unsigned char)148;
long long int var_15 = 6386214545234837985LL;
int var_16 = 1279856112;
int var_17 = 1582311858;
int var_18 = 353384086;
unsigned char var_19 = (unsigned char)156;
signed char var_20 = (signed char)119;
unsigned char var_21 = (unsigned char)219;
long long int var_22 = -6129385243144863356LL;
long long int var_23 = 9213477529281234248LL;
int var_24 = -1005146467;
int var_25 = 1086509202;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
