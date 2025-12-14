#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6514269956156880203LL;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 4280272198U;
signed char var_5 = (signed char)-43;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3265766884U;
int zero = 0;
unsigned int var_10 = 1991351615U;
long long int var_11 = 8279345216087601192LL;
unsigned int var_12 = 1188456089U;
long long int var_13 = 218198491949366441LL;
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
