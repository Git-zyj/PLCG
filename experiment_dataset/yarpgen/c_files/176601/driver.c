#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8149363817838620062LL;
unsigned char var_3 = (unsigned char)17;
short var_4 = (short)20071;
long long int var_5 = -5272380646423099995LL;
unsigned long long int var_7 = 11071396294039639883ULL;
int var_8 = 2071921389;
unsigned char var_9 = (unsigned char)10;
_Bool var_10 = (_Bool)0;
long long int var_11 = -4386036696242564944LL;
unsigned short var_12 = (unsigned short)16687;
long long int var_13 = -8615872812726834260LL;
int var_14 = -672718800;
unsigned char var_15 = (unsigned char)122;
long long int var_16 = -4200497838201867409LL;
int zero = 0;
unsigned short var_17 = (unsigned short)27608;
long long int var_18 = 4685687933406664978LL;
int var_19 = 1262293674;
signed char var_20 = (signed char)77;
void init() {
}

void checksum() {
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
