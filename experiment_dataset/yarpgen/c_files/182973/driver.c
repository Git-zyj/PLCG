#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
signed char var_3 = (signed char)-35;
long long int var_5 = 2288221182071099138LL;
long long int var_6 = 8293355824910850769LL;
unsigned short var_7 = (unsigned short)50262;
int var_9 = 1438700819;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-53;
signed char var_17 = (signed char)-94;
int zero = 0;
unsigned long long int var_18 = 11743524618493739651ULL;
unsigned short var_19 = (unsigned short)37532;
unsigned int var_20 = 4283702206U;
short var_21 = (short)-10948;
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
